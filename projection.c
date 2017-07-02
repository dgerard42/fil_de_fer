/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 18:25:26 by dgerard           #+#    #+#             */
/*   Updated: 2017/06/30 18:25:37 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			project(t_env *env, t_drw *drw)
{
	if (env->ps[0] < WIN_LEN && env->ps[1] < WIN_HI && env->ps[3] > 0 &&
			env->ps[4] > 0)
	{
		drw->x0 = env->ps[0];
		drw->y0 = env->ps[1];
		drw->x1 = env->ps[3];
		drw->y1 = env->ps[4];
//		env->drop = ft_intarraynew(2);
		draw_line(env, drw);
	}
}

void			matrices(char c, int i, t_env *env)
{
	if (c == 'x')
	{
		env->ps[i + 1] = (env->ps[i + 1] * cos(env->xrot)) +
			(env->ps[i + 2] * -sin(env->xrot));
		env->ps[i + 2] = (env->ps[i + 1] * sin(env->xrot)) +
			(env->ps[i + 2] * cos(env->xrot));
	}
	if (c == 'y')
	{
		env->ps[i] = (env->ps[i] * cos(env->yrot)) +
			(env->ps[i + 2] * sin(env->yrot));
		env->ps[i + 2] = (env->ps[i] * -sin(env->yrot)) +
			(env->ps[i + 2] * cos(env->yrot));
	}
	if (c == 'z')
	{
		env->ps[i] = (env->ps[i] * cos(env->zrot)) +
			(env->ps[i + 1] * -sin(env->zrot));
		env->ps[i + 1] = (env->ps[i] * sin(env->zrot)) +
			(env->ps[i + 1] * cos(env->zrot));
	}
}

void			rotate(t_env *env)
{
	int	i;

	i = 0;
	if (env->reinit == false)
	{
		env->xrot = 0.6;
		env->yrot = 0.2;
		env->zrot = 0.0;
	}
	while (i < 6)
	{
		if (env->xrot != 0)
			matrices('x', i, env);
		if (env->yrot != 0)
			matrices('y', i, env);
		if (env->zrot != 0)
			matrices('z', i, env);
		i += 3;
	}
}
