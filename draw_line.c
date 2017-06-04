/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 12:21:31 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/31 23:55:28 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

void				draw_line(t_env *env, t_drw *drw)
{
	int		adjust;
	int		bucket;
	int		drop[2];

	bucket = 0;
	drw->rise = abs((drw->y1) - (drw->y0));
	drw->run = abs((drw->x1) - (drw->x0));
	drop[0] = abs(drw->run * 2);
	drop[1] = abs(drw->rise * 2);
//	(drw->run == 0) ? (adjust = 0) : (adjust = ((drw->rise/drw->run) >= 0) ? 1 : -1);
	
	while (drw->run > drw->rise && drw->y0 < drw->y1)
	{
		printf("loop 1\n");
		mlx_pixel_put(env->mlx, env->window, drw->x0, drw->y0, 0x0000FF);
		drw->x0++;
		bucket += drop[1];
		if (abs(drw->run) < bucket)
		{
			drw->y0 += adjust;
			bucket += drop[0];
		}
	}
	while (drw->rise > drw->run && drw->x0 < drw->x1)
	{
		printf("loop 2\n");
		mlx_pixel_put(env->mlx, env->window, drw->x0, drw->y0, 0x0000FF);
		drw->y0++;
		bucket += drop[0];
		if(abs(drw->rise) < bucket)
		{
			drw->x0 += adjust;
			bucket +=drop[1];
		}
	}
}

/**/
int					main(void)
{
	t_drw drw;
	t_env env;

	env.mlx = mlx_init();
	env.window = mlx_new_window(env.mlx, WIN_LEN, WIN_HI, "hullo");
	drw.x0 = 200;
	drw.y0 = 200;
	drw.x1 = 500;
	drw.y1 = 500;
	draw_line(&env, &drw);
	mlx_loop(env.mlx);
}
/**/
