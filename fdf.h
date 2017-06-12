/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:08:33 by dgerard           #+#    #+#             */
/*   Updated: 2017/06/10 12:06:31 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libs/minilibx/mlx.h"
# include "libs/libft/libft.h"
# include <math.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdbool.h>

void			draw_web(t_env *env);
void			draw_line(t_env *env, t_drw *drw);
int				**read_file(char *filename, t_env *env);
int				key_controls(int keycode, t_env *env);
void			reinit(t_env *env);

# define WIN_HI				1200
# define WIN_LEN			1800

# define KEY_ESC			53
# define KEY_W				13
# define KEY_A				0
# define KEY_S				1
# define KEY_D				2
# define KEY_X				7
# define KEY_Z				6
# define KEY_U				32
# define KEY_H				4
# define KEY_I				34
# define KEY_J				38
# define KEY_O				31
# define KEY_K				40

typedef struct	s_drw
{
	int			x0;
	int			y0;
	int			z0;
	int			x1;
	int			y1;
	int			z1;
	int			rise;
	int			run;
	int			slope;
	int			color;
	int			color_max;
//	bool		colors0;
//	bool		colors1;
}				t_drw;

typedef	struct	s_env
{
	void		*mlx;
	void		*window;
	void		*image;
	int			color;
	int			**map;
	int			*msize;
	float		xrot;
	float		yrot;
	float		zrot;
	int			*ps;
	int			mapmax;
	int			winmax;
	int			scale;
	int			xoffset;
	int			yoffset;
	int			zoffset;
	bool		reinit;
}				t_env;

#endif
