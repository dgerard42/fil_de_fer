/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 17:11:34 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/06 21:19:28 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int i;
	size_t n;
	n = 0;
	char s1[] = "benedict";
	char s2[] = "";

	i = ft_strnequ(s1, s2, n);
	printf("original strings = %s, %s\n", s1, s2);
	printf("match int res = %d\n", i);
} 

//cases to manually enter:
//if the strings are the same length but no match
//if the number is less than the strings but no match
//if the number is more than the strings but no match
//if the number is less than one and more than another but no match
//if the strings are identical up to n
//if the strings are identical and same length
//if the strings are not identical up to n but end on identical letters

/*
int			main(void)
{
	char *s1inputs[7] = {
		"benedict", "benedict",
		"much ado about nothing", "dearest benedict",
		"dearest benedict", "beatrice",
		"benedict the proud"
	};
	char *s2inputs[7] = {
		"beatrice", "beatrice",
		"beatrice", "beatrice",
		"dearest beatrice", "beatrice",
		"beatrice the proud"
	};

	int ninputs[7] = {
		9, 7, 42, 10, 8, 9, 15
	};

	int	expectedres[7] = {
		0, 0, 0, 0, 1, 1, 0
	};

	int i = 0;
	printf("TESTS:\n");
	while (i < 7)
	{
		int a = (expectedres[i]);
		int b = ft_strnequ(s1inputs[i], s2inputs[i], (size_t)ninputs[i]);
		char *test = a == b ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %12s - %12s - %12d - %12d - %12d - %s\x1B[0m\n", i, s1inputs[i], s2inputs[i], ninputs[i], a, b, test);
		i++;
	}
}*/
