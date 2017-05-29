/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 19:36:34 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/28 19:36:37 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int				**read_file(char *filename)
{
	int		y;
	int		x;
	int		fd;
	char	*line;
	int		**map;

	line = NULL;
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		y++;
	while(line[x])
		x++;
	close(fd);
	ft_2dintarraynew(y, x);
	
}
