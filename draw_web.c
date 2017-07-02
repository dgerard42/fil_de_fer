/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_web.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 17:19:59 by dgerard           #+#    #+#             */
/*   Updated: 2017/07/02 13:15:36 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			move(t_env *env)
{
	int i;

	i = 0;
	if (env->reinit == false)
	{
		env->xoffset = 0;
		env->yoffset = 0;
		env->zoffset = 0;
	}
	while (i < 6)
	{
		env->ps[i] = env->ps[i] + env->xoffset;
		env->ps[i + 1] = env->ps[i + 1] + env->yoffset;
		env->ps[i + 2] = env->ps[i + 2] + env->zoffset;
		i = i + 3;
	}
}

void			scale(t_env *env, t_drw *drw)
{
	int i;
	int	mapmax;

	i = 0;
	if (env->reinit == false)
	{
		mapmax = (env->msize[0] >= env->msize[1]) ?
			env->msize[0] : env->msize[1];
		env->winmax = (WIN_HI >= WIN_LEN) ? WIN_HI : WIN_LEN;
		env->scale = env->winmax / (mapmax + 2);
		env->zscale = ((env->msize[2] / mapmax) > 1) ?
			(env->msize[2] / mapmax) * 4 : 4;
	}
	while (i < 6)
	{
		env->ps[i] = (env->ps[i] * env->scale) + env->scale;
		env->ps[i + 1] = (env->ps[i + 1] * env->scale) + env->scale;
		env->ps[i + 2] = (env->ps[i + 2]) * (env->scale / env->zscale);
		i = i + 3;
	}
}

void			populate(int y, int x, int twice, t_env *env)
{
	env->ps[0] = (twice == 0) ? x : y;
	env->ps[1] = (twice == 0) ? y : x;
	env->ps[2] = (twice == 0) ? env->map[y][x] : env->map[x][y];
	env->ps[3] = (twice == 0) ? (x + 1) : y;
	env->ps[4] = (twice == 0) ? y : (x + 1);
	env->ps[5] = (twice == 0) ? env->map[y][x + 1] : env->map[x + 1][y];
}

void			draw_web(t_env *env)
{
	int		x;
	int		y;
	int		twice;
	t_drw	drw;

	twice = -1;
	env->ps = ft_intarraynew(6);
	while (twice++ < 2)
	{
		y = -1;
		while (y++ < ((twice == 0) ? (env->msize[1] - 1) : (env->msize[0] - 1)))
		{
			x = 0;
			while ((x + 1) < ((twice == 0) ? (env->msize[0]) : (env->msize[1])))
			{
				populate(y, x, twice, env);
//				drw.z0 = env->ps[2];
//				drw.z1 = env->ps[5];
//				printf("%d, %d\n", env->ps[2], env->ps[5]);
//				printf("%d, %d\n", drw.z0, drw.z1);
				scale(env, &drw);
				move(env);
				rotate(env);
				project(env, &drw);
				x++;
			}
		}
	}
}
