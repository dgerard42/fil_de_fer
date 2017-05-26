/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3dtests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 12:28:32 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/24 20:05:30 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_drawline(int *p1, int *p2)
{
	int		slope;
	int		yinter;
	int		color = 0xFFFFFF;
	
	slope = ((p2[1] - p1[1]) / (p2[0] - p1[0]));
	yinter = (p1[1] - (slope * p1[0]));
	while (p1[1] < p2[1])
	{
		mlx_pixel_put(mlx, window, p1[0], p1[1], color--);
		p1[0] = p1[0] + 1;
		p1[1] = (slope * p1[0]) + yinter;
	}
}


int				main(void)
{
	int		x = 3;
	int		y = 3;
	int		z = 3;
	int		*p1 = {0,0};
	int		*p2 = {0,0};
	void	*mlx;
	void	*window;
	int		pyramid[z][y][x] = 
	{
		{
			{1,0,1},
			{0,0,0},
			{1,0,1}
		},
		{
			{0,1,0},
			{1,0,1},
			{0,1,0}
		},
		{
			{0,0,0},
			{0,1,0},
			{0,0,0}
		}
	};

	mlx = mlx_init();
	window = mlx_new_window(mlx, 500, 500, "pyramide ");

	/*
	while (z > 0)
	{
		while (y > 0)
		
			while (x > 0)
			{
				p2[0] = p1[0];
				p2[1] = p1[1];
				p1[0] = (x * SCALE);
				p1[1] = (y * SCALE);
				x--;
				if (p2[0] != 0 && p2[1] != 0 && pyramide[z][y][x] 
					ft_drawline(p1, p2);
			}
		}
	}
	*/

}
