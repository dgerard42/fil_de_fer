/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 18:31:45 by dgerard           #+#    #+#             */
/*   Updated: 2017/07/02 13:35:27 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			valid_file(char *filename, t_env *env)
{
	env->valid_file = true;
	if (!(ft_strstr(filename, ".fdf")))
	{
		env->valid_file = false;
		printf("here0\n");
	}
}

void			reinit(t_env *env)
{
	mlx_clear_window(env->mlx, env->window);
	ft_memdel((void **)&env->ps);
	draw_web(env);
}

void			welcome_user(void)
{
	ft_putstr("welcome user ( ͡° ͜ʖ ͡°)\n");
	ft_putstr("--------------command list-----------------\n");
	ft_putstr("ESC == exit program\nW == move up\nA == move left\n");
	ft_putstr("S == move right\nD == move down\nZ == zoom in\nX == zoom out\n");
	ft_putstr("H == rotate x\nU == inverse rotate x\nJ == rotate y\n");
	ft_putstr("I == inverse rotate y\nK == rotate z\nO == inverse rotate z\n");
}

int				main(int argc, char **argv)
{
	t_env	env;

	env.mlx = mlx_init();
	env.reinit = false;
	valid_file(argv[1], &env);
	read_file(argv[1], &env);
	if (argc != 2 || env.valid_file == false)
	{
		ft_putstr("Error\n");
		ft_2dfreearray((void **)env.map, env.msize[1]);
		ft_memdel((void **)&env.msize);
		exit(0);
	}
	env.window = mlx_new_window(env.mlx, WIN_LEN, WIN_HI, "hell yeee");
	welcome_user();
	draw_web(&env);
	mlx_hook(env.window, 2, 0, key_controls, (void *)&env);
	mlx_loop(env.mlx);
	return (0);
}
