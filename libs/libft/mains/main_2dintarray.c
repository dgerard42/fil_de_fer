/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2dintarray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 14:36:05 by dgerard           #+#    #+#             */
/*   Updated: 2017/04/29 15:30:12 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			main(void)
{
	int	**res;
	int	ysize = 6;
	int xsize = 6;
	int y = 0;
	int x = 0;

	res = ft_2dintarray((size_t)ysize, (size_t)xsize);
	while (y < ysize)
	{
		while (x < xsize)
		{
			printf("%d", res[y][x]);
			x++;
		}
		printf("\n");
		y++;
		x = 0;
	}
}
