/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 09:35:35 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/06 13:40:09 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		ft_bump(char c)
{
	printf("c b4 %c\n", c);
	c = c + 4;
	printf("c after %c\n", c);
	return (c);
}

int			main(void)
{
	char const s[] = "que chevere";
	char *fresh;
	fresh = ft_strmap(s, ft_bump);
	printf("full res string = %s\n", fresh);
}
