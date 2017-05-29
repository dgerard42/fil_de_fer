/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   old_bre.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 12:21:31 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/28 17:15:56 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				ft_bresenham(t_coords *coords)
{
	int		adjust;
	int		threshold;
	int		bucket;
	int		*drop[2];

	bucket = 0;
	coords.rise = abs((coords.b1) - (coords.a1));
	coords.run = abs((coords.b0) - (coords.a0));
	drop[0] = abs(run * 2);
	drop[1] = abs(rise * 2);
	if (run != 0)
		adjust = ((rise/run) >= 0) ? 1 : -1;
	while (coords.run > coords.rise && coords.a1 < coords.b1)
	{
		put_pixel;
		coords.a0++;
		bucket += drop[1];
		if (abs(run) < bucket)
		{
			coords.a1 += adjust;
			bucket += drop[0];
		}
	}	
	while (rise > run && coords.a0 < coords.b0)
	{
		put_pixel;
		coords.a1++;
		bucket += drop[0];
		if(abs(rise) < bucket)
		{
			coords.a0 += adjust;
			bucket +=drop[1];
		}
	}
}

