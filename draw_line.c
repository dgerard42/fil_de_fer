/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 12:21:31 by dgerard           #+#    #+#             */
/*   Updated: 2017/07/01 22:19:46 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				no_run(t_env *env, t_drw *drw)
{
	if (drw->y1 < drw->y0)
		ft_bitswap((unsigned char *)&(drw->y0), (unsigned char *)&(drw->y1), 4);
	while (drw->y0 < drw->y1)
		mlx_pixel_put(env->mlx, env->window, drw->x0, drw->y0++, 0x00FF00);
}

void				engine(t_env *env, t_drw *drw, int riru, int *drop)
{
	int a0;
	int a1;
	int b0;
	int	ruri;
	int	bucket;

	bucket = 0;
	ruri = (riru == 0) ? 1 : 0;
	a0 = (riru == 0) ? (drw->x0) : (drw->y0);
	a1 = (riru == 0) ? (drw->x1) : (drw->y1);
	b0 = (riru == 0) ? (drw->y0) : (drw->x0);
	while (a0 != a1)
	{
		if (riru == 0)
			mlx_pixel_put(env->mlx, env->window, a0++, b0, 0x00FF00);
		if (riru == 1)
			mlx_pixel_put(env->mlx, env->window, b0, a0++, 0x00FF00);
		bucket += drop[riru];
		if (bucket >= drw->level)
		{
			b0 += drw->adjust;
			drw->level += drop[ruri];
		}
	}
}

void				swap_points(t_drw *drw)
{
	ft_bitswap((unsigned char *)&(drw->x0), ((unsigned char *)&drw->x1), 4);
	ft_bitswap((unsigned char *)&(drw->y0), ((unsigned char *)&drw->y1), 4);
}

void				draw_line(t_env *env, t_drw *drw)
{
	int		drop[2];

	drw->rise = (drw->y1) - (drw->y0);
	drw->run = (drw->x1) - (drw->x0);
	drop[0] = abs(drw->rise * 2);
	drop[1] = abs(drw->run * 2);
	if (drw->run == 0)
		no_run(env, drw);
	else
	{
		drw->adjust = (drw->rise * drw->run >= 0) ? 1 : -1;
		if (abs(drw->rise) <= abs(drw->run))
		{
			drw->level = abs(drw->run);
			if (drw->x1 < drw->x0)
				swap_points(drw);
			engine(env, drw, 0, drop);
		}
		if (abs(drw->rise) > abs(drw->run))
		{
			drw->level = abs(drw->rise);
			if (drw->y1 < drw->y0)
				swap_points(drw);
			engine(env, drw, 1, drop);
		}
	}
}

/*
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
*/
