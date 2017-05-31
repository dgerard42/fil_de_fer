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

/*
void			fill_array(int **map, int *size, int fd, char *filename)
{
	int		y2;
	int		x2;
	char	buff[1];

	while (y2 < size[1])
	{
		while(x2 < size[0])
		{
			read(fd, buff, 1);
			if (buff[0] != ' ' && buff[0] != '\n')
				map[y2][x2++] = ft_atoi(buff);
		}
		y2++;
		x2 = 0;
	}
}
*/

#include <stdio.h>

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
//		printf("line = %s\n", line);
		i = 0;
		x = 0;
		while(line[i] != '\0')
		{
//			printf("line[i] = %c ", line[i]);
			if (line[i] != ' ' && line[i] != '\n')
			{
				tmp = ft_atoi(line + i);
//				printf("%d, ", tmp);
//				(*map)[y][x++] = 42;
				(*map)[y][x++] = tmp;
//				(*map)[y][x++] = ft_atoi(line + i);
			}
//			printf("%d", (*map)[y][x]);
			while (line[i] != '\0' && line[i] != ' ' && line[i] != '\n')
				i++;
			i++;
		}
//		printf("\n");
		y++;
	}
	ft_memdel((void **)&line);
	close(fd);
}


int				**read_file(char *filename)
{
	int		i;
	int		*size;
	int		fd;
	char	*line;
	int		**map;

	i = 0;
	line = NULL;
	size = ft_intarraynew(2);
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		size[1]++;
	while (line[i] != '\0')
	{
		if(line[i] != ' ' && line[i] != '\n')
			size[0]++;
		while(line[i] != ' ' && line[i] != '\n' && line[i] != '\0')
			i++;
		i++;
	}
//	printf("%d\n", size[0]);
// 	printf("%d\n", size[1]);
	map = ft_2dintarray(size[0], size[1]);
	close(fd);
	ft_memdel((void**)&line);
	fill_array(&map, fd, filename);
	return (map);
}

/**/
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
/**/
