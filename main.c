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

int			main(int argc, char **argv)
{
	t_env	*env;

	env.mlx = mlx_init();
	read_file(argv[1]);
	env.color = 0xFFFFFF;
	env.image = mlx_new_image(env.mlx, env.win_len, env.win_hi, env.color);
}
