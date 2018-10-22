/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:16:35 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/03 18:02:42 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char s1[42];
	char s2[] = " pale blue dot";
	ft_strcpy(s1, "billions and billions");

	strcat(s1, s2);
	printf("actual strcat results = %s\n", s1);

	char cs1[42];
	char cs2[] = " pale blue dot";
	ft_strcpy(cs1, "billions and billions");

	ft_strcat(cs1, cs2);
	printf("ft_strcat results = %s\n", cs1);
}
