/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 09:35:35 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/06 12:00:17 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ptrchar(unsigned int i, char *s)
{
	char c;

	c = s[i];
	printf("%c\n", c);
}

int			main(void)
{
	char s[] = "que chevere";
	ft_striteri (s, ptrchar);
}
