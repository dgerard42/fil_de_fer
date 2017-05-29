/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_bre.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 12:21:31 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/28 18:30:35 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				draw_line(t_coords *coords)
{
	int		adjust;
	int		threshold;
	int		bucket;
	int		*drop[2];

	bucket = 0;
	coords.rise = abs((coords.y1) - (coords.y0));
	coords.run = abs((coords.x1) - (coords.x0));
	drop[0] = abs(run * 2);
	drop[1] = abs(rise * 2);
	(run == 0) ? (adjust = 0) : (adjust = ((rise/run) >= 0) ? 1 : -1);
	while (coords.run > coords.rise && coords.y0 < coords.y1)
	{
		put_pixel;
		coords.x0++;
		bucket += drop[1];
		if (abs(run) < bucket)
		{
			coords.y0 += adjust;
			bucket += drop[0];
		}
	}
	while (coords.rise > coords.run && coords.x0 < coords.x1)
	{
		put_pixel;
		coords.y0++;
		bucket += drop[0];
		if(abs(rise) < bucket)
		{
			coords.x0 += adjust;
			bucket +=drop[1];
		}
	}
}


/*
int					main(void)
{

}
*/
