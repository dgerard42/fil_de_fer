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

#include "libs/minilibx/mlx.h"
#include "libs/libft/libft.h"
#include "libs/libgfx/libgfx.h"
#include <fcntl.h>

void			draw_web(t_env *env);
void			draw_line(t_env *env, t_drw *drw);
int				**read_file(char *filename, t_env *env);

#define SCALE 100

#endif
