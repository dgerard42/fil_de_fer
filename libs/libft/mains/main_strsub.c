/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 17:11:34 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/08 17:42:50 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TEST CASES
//1.the start is after the null char
//2.the len is 0
//3.the start is zero
//4.both are zero
//XX5.start is negative 
//XX6.both len and start are negative
//7.the string is null
//8.normal input that would be typical
//9.if start begins on the string but then passes it len makes it pass

int			main(void)
{
	char *sinputs[7] = {
		"much ado about nothing", "sigh no more",
		"beatrice", "benedict", "", "shakespeare", 
		"i wish my horse were as fast as your tounge"
	};

	int startinputs[7] = { 
		42, 2, 0, 0, 2, 2, 38 
	};

	int leninputs[7] = {
		 8, 0, 8, 0, 8, 8, 10
	};

/*	char *expectedres[9] = {
		"", "", "", "", "", "", "", "akespear", "bly"
	};

	int i = 0;
	printf("TESTS:\n");
	while (i < 9)
	{
		char *a = (expectedres[i]);
		char *b = ft_strsub((const char *)sinputs[i], (unsigned int)startinputs, (size_t)leninputs[i]);
		char *test = a == b ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %12s - %12d - %12d - %12s - %12s - %s\x1B[0m\n", i, sinputs[i], startinputs[i], 
				leninputs[i], a, b, test);
		i++;
	} */
	int i;
	i = 0;
	char *res;
	while (i < 7)
	{
		res = ft_strsub((const char *)sinputs[i], (unsigned int)startinputs[i], (size_t)leninputs[i]);
		printf ("%d res string = %s\n", i, res);
		i++;
	}
}
