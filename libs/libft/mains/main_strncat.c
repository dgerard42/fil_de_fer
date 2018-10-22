/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:17:15 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/03 18:40:37 by dgerard          ###   ########.fr       */
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

	strncat(s1, s2, n);
	printf("actual strncat results = %s\n", s1);

	char cs1[42];
	char cs2[] = " pale blue dot";
	strcpy(cs1, "billions and billions");

	ft_strncat(cs1, cs2, n);
	printf("ft_strncat results = %s\n", cs1);
}
