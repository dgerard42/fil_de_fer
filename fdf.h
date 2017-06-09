/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:08:33 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/31 23:13:13 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libs/minilibx/mlx.h"
# include "libs/libft/libft.h"
# include "libs/libgfx/libgfx.h"
# include <math.h>
# include <fcntl.h>

void			draw_web(t_env *env);
void			draw_line(t_env *env, t_drw *drw);
int				**read_file(char *filename, t_env *env);
int				key_controls(int keycode, t_env *env);
void			reinit(t_env *env);

# define WIN_HI				1200
# define WIN_LEN			1200

# define KEY_ESC			53
# define KEY_W				13
# define KEY_A				0
# define KEY_S				1
# define KEY_D				2
# define KEY_1				18
# define KEY_2				19
# define KEY_X				7
# define KEY_Y				16
# define KEY_Z				6

#endif
