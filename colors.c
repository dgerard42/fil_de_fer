/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 12:30:51 by dgerard           #+#    #+#             */
/*   Updated: 2017/06/30 12:30:54 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			color_calcs(t_env *env, t_drw *drw, t_clr *clr)
{
	clr->start_color = 0xFF0000;
	if (env->msize[2] > 0)
	{
		float 	color_inc;
		float	zdiff;

		clr->end_color = 0x00FF00;
		clr->color_diff = clr->start_color / clr->end_color;
		// was originaly start color divided by end color. why did that work?
		color_inc = clr->color_diff / (env->msize[2] * 1000 * (env->scale / 4));
		zdiff = (drw->z0 > drw->z1) ? (drw->z0 - drw->z1) : (drw->z1 - drw->z0);
		zdiff = (drw->z0 == drw->z1) ? 0 : zdiff;
		//when these 2 lines are remved, the colors are far more brilliant
		clr->color_max = zdiff * color_inc;
	}
}

void				color_setup(t_drw *drw, t_clr *clr)
{
	int local_clr_diff;

	local_clr_diff = clr->start_color - clr->color_max;
	if (abs(drw->rise) <= abs(drw->run))
		clr->p_diff = (drw->x1 <= drw->x0) ? (drw->x0 - drw->x1) : (drw->x1 - drw->x0);
	if (abs(drw->rise) > abs(drw->run))
		clr->p_diff = (drw->y1 <= drw->y0) ? (drw->y0 - drw->y1) : (drw->y1 - drw->y0);
	clr->c_bucket = 0;
	clr->c_drop = (clr->p_diff != 0) ? (clr->color_diff / clr->p_diff) * 1000 : 1000;
	clr->c_level = 1000;
//	printf("after color setup z0=%d z1=%d\n", drw->z0, drw->z1);
}


int					color_inc(t_env *env, t_clr *clr, t_drw *drw)
{
	if (env->msize[2] > 0 && drw->z1 != drw->z0)
	{
		clr->c_bucket += clr->c_drop;
		if (clr->c_bucket >= clr->c_level)
		{
			clr->start_color++;
			clr->c_level += 1000;
		}
	}
	return (clr->start_color);
}
