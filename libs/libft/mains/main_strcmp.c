/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 13:14:05 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/12 16:12:02 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char	*s1[9] = {
		"daniella", "eliana", "cora",
		"", "sbogar", "snorth",
		"scollet", "angie", "sergio"
	};

	char	*s2[9] = {
		"daniella", "tammy", "elliot",
		"ian", "lou", "maelle", 
		"anastasia", "kaitlyn", "obssa"
	};

	int i = 0;
	while (i < 9)
	{
		int a = strcmp(s1[i], s2[i]);
		int b = ft_strcmp(s1[i], s2[i]);
		printf("||| library result == %d ||| ft_result == %d |||\n", a, b);
		i++;
	}	
}
