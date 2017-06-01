/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 19:36:34 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/31 14:21:31 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			fill_array(int ***map, int fd, char *filename)
{
	int	i;
	int y;
	int x;
	int	tmp;
	char *line;

	y = 0;
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		i = 0;
		x = 0;
		while(line[i] != '\0')
		{
			if (line[i] != ' ' && line[i] != '\n')
			{
				tmp = ft_atoi(line + i);
				(*map)[y][x++] = tmp;
			}
			while (line[i] != '\0' && line[i] != ' ' && line[i] != '\n')
				i++;
			i++;
		}
		y++;
	}
	ft_memdel((void **)&line);
	close(fd);
}

int				**read_file(char *filename, t_env *env)
{
	int		i;
	int		fd;
	char	*line;
	int		**map;

	i = 0;
	line = NULL;
	env->msize = ft_intarraynew(2);
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		env->msize[1]++;
	while (line[i] != '\0')
	{
		if(line[i] != ' ' && line[i] != '\n')
			env->msize[0]++;
		while(line[i] != ' ' && line[i] != '\n' && line[i] != '\0')
			i++;
		i++;
	}
	map = ft_2dintarray(env->msize[0], env->msize[1]);
	close(fd);
	ft_memdel((void**)&line);
	fill_array(&map, fd, filename);
	return (map);
}

/*
#include <stdio.h>
int				main(int argc, char **argv)
{
	if (argc == 2)
	{
		int		**res;
		int		y;
		int		x;

		y = 0;
		x = 0;
		res = read_file(argv[1]);
		while (y < 11)
		{
			while(x < 19)
			{
				printf("%d,", res[y][x]);
				x++;
			}
			printf("\n");
			y++;
			x = 0;
		}
	}
}
*/
