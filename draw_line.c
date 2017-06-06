/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 12:21:31 by dgerard           #+#    #+#             */
/*   Updated: 2017/06/03 18:15:57 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

/*
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
	if (drw->run != 0)
		adjust = ((drw->rise/drw->run) >= 0) ? 1 : -1;
	while (drw->run >= drw->rise && drw->y0 <= drw->y1)
	{
		mlx_pixel_put(env->mlx, env->window, drw->x0, drw->y0, 0x0000FF);
		drw->x0++;
		bucket += drop[0];
		if (bucket > abs(drw->run))
		{
			drw->y0 += adjust;
			bucket += drop[1];
		}
	}
	while (drw->rise > drw->run && drw->x0 < drw->x1)
	{
		mlx_pixel_put(env->mlx, env->window, drw->x0, drw->y0, 0x0000FF);
		drw->y0++;
		bucket += drop[1];
		if(bucket > abs(drw->rise))
		{
			drw->x0 += adjust;
			bucket +=drop[0];
		}
	}
}
*/
/**/
void				draw_line(t_env *env, t_drw *drw)
{
	int		adjust;
	int		bucket;
	int		level;
	int		drop[2];

	bucket = 0;
	drw->rise = (drw->y1) - (drw->y0);
	drw->run = (drw->x1) - (drw->x0);
	drop[0] = abs(drw->rise * 2);
	drop[1] = abs(drw->run * 2);
	if (drw->run == 0)
	{
		if (drw->y1 < drw->y0)
			ft_swap((unsigned char *)&(drw->y0), (unsigned char *)&(drw->y1), 4);
		while (drw->y0 < drw->y1)
			mlx_pixel_put(env->mlx, env->window, drw->x0, drw->y0++, 0x00FF00);
	}
	else
	{
		((drw->rise) >= 0) ? (adjust = 1) : (adjust = -1);
		//change how you are assigning adjust. you are assigning it incorrectly
		if (abs(drw->rise) <= abs(drw->run))
		{
			printf("%d\n", adjust);
			level = abs(drw->run);
			if (drw->x1 < drw->x0)
			{
				ft_swap((unsigned char *)&(drw->x0), ((unsigned char *)&drw->x1), 4);
				ft_swap((unsigned char *)&(drw->y0), ((unsigned char *)&drw->y1), 4);
			}
			while (drw->x0 != drw->x1)
			{
				mlx_pixel_put(env->mlx, env->window, drw->x0++, drw->y0, 0x00FF00);
				bucket += drop[0];
				if (bucket >= level)
				{
					drw->y0 += adjust;
					level += drop[1];
				}
			}
		}
		if (abs(drw->rise) > abs(drw->run))
		{
			printf("%d\n", adjust);
			level = abs(drw->rise);
			if (drw->y1 < drw->y0)
			{
				ft_swap((unsigned char *)&(drw->x0), ((unsigned char *)&drw->x1), 4);
				ft_swap((unsigned char *)&(drw->y0), ((unsigned char *)&drw->y1), 4);
			}
			while (drw->y0 != drw->y1)
			{
				mlx_pixel_put(env->mlx, env->window, drw->x0, drw->y0++, 0x00FF00);
				bucket += drop[1];
				if (bucket >= level)
				{
					drw->x0 += adjust;
					level += drop[0];
				}
			}
		}
	}
}
/**/
/**/
int					main(int argc, char **argv)
{
	if (argc == 5)
	{
		t_drw drw;
		t_env env;

		env.mlx = mlx_init();
		env.window = mlx_new_window(env.mlx, WIN_LEN, WIN_HI, "hullo");
		drw.x0 = ft_atoi(argv[1]);
		drw.y0 = ft_atoi(argv[2]);
		drw.x1 = ft_atoi(argv[3]);
		drw.y1 = ft_atoi(argv[4]);
		draw_line(&env, &drw);
		mlx_loop(env.mlx);
	}
}
/**/
