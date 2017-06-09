/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 18:31:45 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/28 18:31:58 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

bool		valid_file(char *filename)
{
	if (!(ft_strstr(filename, ".fdf")))
		return (false);
	return (true);
}

void				reinit(t_env *env)
{
	mlx_clear_window(env->mlx, env->window);
//	ft_freearray((void **)env->ps, 6);
	draw_web(env);
}

int			main(int argc, char **argv)
{
	t_env	env;

	env.mlx = mlx_init();
	env.reinit = false;
	if (argc != 2 || valid_file(argv[1]) == false)
	{
		ft_putstr("Error\n");
		exit (0);
	}
 	env.map = read_file(argv[1], &env);
	//env->image = mlx_new_image(env->mlx, env->win_len, env->win_hi, env->color);
		//use images later, get it working with pixel put first
	env.window = mlx_new_window(env.mlx, WIN_LEN, WIN_HI, "hell yeee");
	draw_web(&env);
	mlx_key_hook(env.window, key_controls, 0);
	mlx_loop(env.mlx);
	return (0);
}
