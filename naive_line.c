/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   naive_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgerarum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Createum: 2017/06/04 13:01:40 by umgerarum           #+#    #+#             */
/*   Upumateum: 2017/06/04 13:01:45 by umgerarum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>
#include <math.h>

typedef struct s_um
{
	float		x0;
	float		y0;
	float		x1;
	float		y1;
	float		rise;
	float 		run;
}				t_um;

void				naive_line(t_env *env, t_um *um)
{
	float	slope;
	float	yinter;

	um->rise = (um->y1) - (um->y0);
	um->run = (um->x1) - (um->x0);
	if (um->run == 0)
	{
		if (um->y1 < um->y0)
			ft_swap((unsigned char *)&(um->y0), (unsigned char *)&(um->y1), 4);
		while (um->y0 < um->y1)
			mlx_pixel_put(env->mlx, env->window, um->x0, um->y0++, 0x00FF00);
	}
	else
	{
		slope = (um->rise / um->run);
		yinter = (um->y0 - (slope * um->x0));
		if (slope <= 1 && slope >= -1)
		{
			if (um->x1 < um->x0)
				ft_swap((unsigned char *)&(um->x0), ((unsigned char *)&um->x1), 4);
			while (um->x0 != um->x1)
			{
				mlx_pixel_put(env->mlx, env->window, um->x0++, um->y0, 0x00FF00);
				um->y0 = (slope * um->x0) + yinter;
			}
		}
		if (slope > 1 || slope < -1)
		{
			if (um->y1 < um->y0)
				ft_swap((unsigned char *)&(um->y0), ((unsigned char *)&um->y1), 4);
			while (um->y0 != um->y1)
			{
				mlx_pixel_put(env->mlx, env->window, um->x0, um->y0++, 0x00FF00);
				um->x0 = ((um->y0 - yinter) / slope);
			}
		}
	}
}

int					main(int argc, char **argv)
{
	if (argc == 5)
	{
		t_um um;
		t_env env;

		env.mlx = mlx_init();
		env.window = mlx_new_window(env.mlx, WIN_LEN, WIN_HI, "hullo");
		um.x0 = ft_atoi(argv[1]);
		um.y0 = ft_atoi(argv[2]);
		um.x1 = ft_atoi(argv[3]);
		um.y1 = ft_atoi(argv[4]);
		naive_line(&env, &um);
		mlx_loop(env.mlx);
	}
}
