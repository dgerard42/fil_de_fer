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
	ft_memdel((void **)&env->ps);
	draw_web(env);
}

void		welcome_user()
{
	ft_putstr("welcome user ( ͡° ͜ʖ ͡°)\n");
	ft_putstr("--------------command list-----------------\n");
	ft_putstr("ESC == exit program\nW == move up\nA == move left\n");
	ft_putstr("S == move right\nD == move down\nZ == zoom in\nX == zoom out\n");
	ft_putstr("H == rotate x\nU == inverse rotate x\nJ == rotate y\n");
	ft_putstr("I == inverse rotate y\nK == rotate z\nO == inverse rotate z\n");
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
	env.window = mlx_new_window(env.mlx, WIN_LEN, WIN_HI, "hell yeee");
	welcome_user();
	draw_web(&env);
	mlx_hook(env.window, 2, 0, key_controls, (void *)&env);
	mlx_loop(env.mlx);
	return (0);
}
