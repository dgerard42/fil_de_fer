/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:11:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/13 22:42:39 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char big[] = "un deux 9";

	char *little [4] = {
		"deux", "deux", "6", "9"
	};

	int len[4] = {
		10, 1, 10, 10
	};
	
	int i = 0;
	while (i < 4)
	{
		char *res;
		char *ft_res;
		res = strnstr((const char*)big, (const char*)little[i], (size_t)len[i]);
		ft_res = ft_strnstr((const char*)big, (const char*)little[i], (size_t)len[i]);
		printf("|||input ==%s, %s|||strnstr ouput ==%s|||ft_strnstr output ==%s|||\n", big, little[i], res, ft_res);
		i++;
	}
}
