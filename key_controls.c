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
	ft_memdel((void **)&env->ps);
	ft_2dfreearray((void **)env->map, env->msize[1]);
	ft_memdel((void **)&env->msize);
	exit(0);
}

int					key_controls(int keycode, t_env *env)
{
	if (keycode == KEY_ESC)
		exit_fdf(env);
	if (keycode == KEY_W)
		env->yoffset += (env->winmax / 42);
	if (keycode == KEY_A)
		env->xoffset -= (env->winmax / 42);
	if (keycode == KEY_S)
		env->yoffset -= (env->winmax / 42);
	if (keycode == KEY_D)
		env->xoffset += (env->winmax / 42);
	if (keycode == KEY_Z)
		env->scale += 10;
	if (keycode == KEY_X)
		env->scale -= 10;
	if (keycode == KEY_U)
		env->xrot += 0.2;
	if (keycode == KEY_H)
		env->xrot -= 0.2;
	if (keycode == KEY_I)
		env->yrot += 0.2;
	if (keycode == KEY_J)
		env->yrot -= 0.2;
	if (keycode == KEY_O)
		env->zrot += 0.2;
	if (keycode == KEY_K)
		env->zrot -= 0.2;
	env->reinit = true;
	reinit(env);
	return (0);
}
