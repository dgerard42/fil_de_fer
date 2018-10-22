/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 09:35:35 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/06 17:06:43 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		ft_8thenbump(unsigned int i, char c)
{
	if (i > 8)
		c = c + 4;
	return (c);
}

int			main(void)
{
	char const s[] = "is there life on mars";
	printf("original string = %s\n", s);
	char *fresh;
	fresh = ft_strmapi(s, ft_8thenbump);
	printf("full fresh string after ft = %s\n", fresh);
}
