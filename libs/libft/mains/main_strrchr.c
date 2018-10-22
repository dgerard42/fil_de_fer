/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 18:40:02 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/10 22:47:51 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char *inputs[4] = {
		"wolfgang", "amadeus", "mozart", ""
	};

	int cinputs[4] = {
		'g', 'd', 0, 'a'
	};

	int i = 0;
	char *res;
	char *ft_res;
	while (i < 4)
	{
		res = strrchr(inputs[i], cinputs[i]);
		ft_res = ft_strrchr(inputs[i], cinputs[i]);
		printf("|||res string = %s |||ft_res string %s|||\n", res, ft_res);
		i++;
	}
}
