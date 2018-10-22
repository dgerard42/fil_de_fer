/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:17:15 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/20 22:31:36 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	size_t n;

	n = 9;
	char s1[42];
	char s2[] = " pale blue dot";
	strcpy(s1, "billions and billions");

	strlcat(s1, s2, n);
	printf("actual strlcat results = %s\n", s1);

	char cs1[42];
	char cs2[] = " pale blue dot";
	strcpy(cs1, "billions and billions");

	ft_strlcat(cs1, cs2, n);
	printf("ft_strlcat results = %s\n", cs1);
}
