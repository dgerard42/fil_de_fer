/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:59:27 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/28 17:54:48 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				draw_line(t_coords *coords)
{
	int *check[2];
	int	*adjust[2];
	
	coords.rise = -abs(coords.b1 - coords.a1);
	coords.run = abs(coords.a0 - coords.b0);
	check[0] = coords.rise + coords.run;
	adjust[0] = 
	adjust[1] = 
	while (1)
	{
		place_pixel(a0,a1);
		if (a0 == b0 && a1 == b1)
			break;
		check[1] = check[0] + check[0];
		if (check[1] >= coords.rise)
		{
			check[0] += coords.rise;
			coords.a0 += adjust[0];
		}
		

	}
}
