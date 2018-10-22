/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsetm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 10:43:31 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/01 18:17:00 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main()
{
	void *b;
	int c;
	size_t len;

	b = "cats";
	c = '$';
	len = 2;

	printf("original string:%s\n", b);
	printf("replacing byte:%c\n", c);
	printf("number of bytes replaced:%zu\n", len);
	printf("ft_memset output:%s\n", memset(b, c, len));
	printf("ft_memset output:%s\n", ft_memset(b, c, len));

	return(42);
}
