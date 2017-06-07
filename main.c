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

int			main(int argc, char **argv)
{
	t_env	env;

	env.mlx = mlx_init();
	if (argc != 2)
		return (0);
 	env.map = read_file(argv[1], env);
		//here maybe look at map size and figure out appropritate window size
		//at the very least, scale the map, maybe not in a seperate function
	//env->image = mlx_new_image(env->mlx, env->win_len, env->win_hi, env->color);
		//use images later, get it working with pixel put first
	env.window = mlx_new_window(env.mlx, WIN_LEN, WIN_HI, "(☞ﾟヮﾟ)☞");
	draw_web(env);
	mlx_loop(env.mlx);
}
