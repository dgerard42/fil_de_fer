/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 19:36:34 by dgerard           #+#    #+#             */
/*   Updated: 2017/06/30 15:19:03 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
void			is_map(int **map, t_env *env)
{
	int		y;
	int		x;
	y = 0;
	x = 0;
	while (y < env->msize[1])
	{
		while(x < env->msize[0])
		{
			printf("%d,", map[y][x]);
			x++;
		}
		printf("\n");
		y++;
		x = 0;
	}
}
*/

int				line_fill(t_env *env, char *line, int i, int y)
{
	int x;

	x = 0;
	while (line[i] != '\0')
	{
		if (line[i] != ' ' && line[i] != '\n')
		{
			env->map[y][x++] = ft_atoi(line + i);
			if (abs(ft_atoi(line + i)) > env->msize[2])
				env->msize[2] = ft_atoi(line + i);
		}
		while (line[i] != '\0' && line[i] != ' ' && line[i] != '\n')
			i++;
		if (line[i] != '\0')
			i++;
	}
	return (x);
}

void			fill_array(int fd, char *filename, t_env *env)
{
	int		i;
	int		y;
	int		x;
	int		x_len;
	char	*line;

	y = 0;
	x_len = 0;
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		i = 0;
		x = line_fill(env, line, i, y);
		if (x != env->msize[0])
			env->valid_file = false;
		y++;
	}
	ft_memdel((void **)&line);
	close(fd);
}

void			read_file(char *filename, t_env *env)
{
	int		i;
	int		fd;
	char	*line;
	int		**map;

	i = 0;
	line = NULL;
	env->msize = ft_intarraynew(3);
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		env->msize[1]++;
	while (line[i] != '\0')
	{
		if (line[i] != ' ' && line[i] != '\n')
			env->msize[0]++;
		while (line[i] != ' ' && line[i] != '\n' && line[i] != '\0')
			i++;
		i++;
	}
	env->map = ft_2dintarray(env->msize[1], env->msize[0]);
	close(fd);
	ft_memdel((void**)&line);
	fill_array(fd, filename, env);
//	is_map(env->map, env);
}
