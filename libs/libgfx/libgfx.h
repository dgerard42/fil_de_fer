/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgfx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 12:33:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/31 23:12:36 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGFX_H
# define LIBGFX_H

typedef struct	s_drw
{
	int			x0;
	int			y0;
	int			x1;
	int			y1;
	int			rise;
	int			run;
	int			slope;
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
//	int			xoffest;
//	int			yoffset;
//	int			zoffset;
}				t_env;

#endif
