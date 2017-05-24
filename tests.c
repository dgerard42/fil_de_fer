/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 19:45:10 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/23 22:06:03 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

/*
//make a square
int			main(void)
{
	int		x;
	int		y;
	void	*mlx;
	void	*window;

	y = 42;
	mlx = mlx_init();
	window = mlx_new_window(mlx, 300, 300, "🜞 fils de fer 🜞");
	while (y < 142)
	{	
		x = 42;
		while (x < 142)
		{
			mlx_pixel_put(mlx, window, x, y, 0x7FFFD4);
			x++;
		}
		y++;
	}
	mlx_loop(mlx);
}
*/
/**/
//here's a gradient square
int			main(void)
{
	int		x;
	int		y;
	int		color;
	void	*mlx;
	void	*window;

	y = 42;
	color = 0x000000;
	mlx = mlx_init();
	window = mlx_new_window(mlx, 300, 600, "🜞 fils de fer 🜞");
	while (y < 420)
	{	
		x = 42;
		while (x < 142)
		{
			mlx_pixel_put(mlx, window, x, y, color);
			x++;
		}
		y++;
		color++;
	}
	mlx_loop(mlx);
}
/**/
