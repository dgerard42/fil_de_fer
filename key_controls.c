/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_controls.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 17:34:17 by dgerard           #+#    #+#             */
/*   Updated: 2017/07/02 13:17:27 by dgerard          ###   ########.fr       */
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

void				rotational(int keycode, t_env *env)
{
	if (keycode == KEY_U)
		env->xrot += 0.03;
	if (keycode == KEY_H)
		env->xrot -= 0.03;
	if (keycode == KEY_I)
		env->yrot += 0.03;
	if (keycode == KEY_J)
		env->yrot -= 0.03;
	if (keycode == KEY_O)
		env->zrot += 0.03;
	if (keycode == KEY_K)
		env->zrot -= 0.03;
}

int					key_controls(int keycode, t_env *env)
{
	if (keycode == KEY_ESC)
		exit_fdf(env);
	if (keycode == KEY_W)
		env->yoffset += (env->winmax / 100);
	if (keycode == KEY_A)
		env->xoffset -= (env->winmax / 100);
	if (keycode == KEY_S)
		env->yoffset -= (env->winmax / 100);
	if (keycode == KEY_D)
		env->xoffset += (env->winmax / 100);
	if (keycode == KEY_Z)
		env->scale += 4;
	if (keycode == KEY_X)
		env->scale -= 4;
	if (keycode == KEY_U || keycode == KEY_H || keycode == KEY_I ||
		keycode == KEY_J || keycode == KEY_O || keycode == KEY_K)
		rotational(keycode, env);
	env->reinit = true;
	reinit(env);
	return (0);
}
