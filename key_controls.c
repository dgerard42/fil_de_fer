/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_controls.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 17:34:17 by dgerard           #+#    #+#             */
/*   Updated: 2017/06/07 17:34:28 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				exit_fdf(t_env *env)
{
	mlx_destroy_window(env->mlx, env->window);
//	ft_freearray((void **)env->ps, 6);
//	ft_2dfreearray(env->map);
//	ft_freearray((void **msize)env->msize, 2)
	exit(0);
}

int					key_controls(int keycode, t_env *env)
{
	if (keycode == KEY_ESC)
		exit_fdf(env);
	if (keycode == KEY_W)
		env->yoffset += 5;
	if (keycode == KEY_A)
		env->xoffset += -5;
	if (keycode == KEY_S)
		env->yoffset += -5;
	if (keycode == KEY_D)
		env->xoffset += 5;
	if (keycode == KEY_1)
		env->zoffset += 5;
	if (keycode == KEY_2)
		env->zoffset += -5;
	if (keycode == KEY_X)
		env->xrot += 0.1;
	if (keycode == KEY_Y)
		env->yrot += 0.1;
	if (keycode == KEY_Z)
		env->zrot += 0.1;
	env->reinit = true;
	reinit(env);
	return (0);
}
