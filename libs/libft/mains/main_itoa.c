/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 16:24:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/13 16:48:05 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				main(void)
{
	int tests[8] = {
		42, 0, 1, -42, 398729, 
		-042, 042, 000
	};	

	int i = 0;
	char *fresh;

	while (i < 8)
	{
		fresh = ft_itoa(tests[i]);
		printf("||| test #%d ||| input number == %d||| output string == %s|||\n", i, tests[i], fresh);
		i++;
	}
}
