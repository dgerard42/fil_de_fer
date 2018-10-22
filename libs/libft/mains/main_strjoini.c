/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoini.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 17:55:06 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/24 16:10:45 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TEST CASES
//0.s1 empty
//1.s2 empty
//2.s1 and s2 empty
//3. normal inputs

/*int 		main(void)
{
	char *s1[4] = {
		"", "rose", "", "rose"
	};

	char *s2[4] = {
		"daisy", "", "", "daisy"
	};

	int size[4] = {
		0, 0, 0, 0
	};

	int i;
	char *res;

	i = 0;
	while (i < 4)
	{
		res = ft_strjoini(s1[i], s2[i], size[i]);
		printf ("%d res string = %s\n", i, res);
		i++;
	}
}*/

#include <stdio.h>

int			main(void)
{
	char *s1;
	char *s2;
	char *fill = "0123456789five";
	size_t n = 14;
	char *res;

	s1 = (char *)malloc(sizeof(char) * 15);
	s2 = (char *)malloc(sizeof(char) * 15);
	ft_bzero(s1, (size_t)15);
	ft_bzero(s2, (size_t)15);
	memcpy((void *)s1, (void *)fill, n);
	memcpy((void *)s2, (void *)fill, n);
	res = ft_strjoini(s1, s2, (size_t)3);
	printf ("res = %s\n", res);
}
