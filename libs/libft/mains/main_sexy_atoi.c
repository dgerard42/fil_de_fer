/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sexy_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalcort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 16:55:39 by sbalcort          #+#    #+#             */
/*   Updated: 2017/05/31 13:41:00 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/*
int		ft_atoi(char *str)
{
	int sign;
	int result;
	int i;
	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' || str [i] <= '9')
	{
		if (str[i] < '0' || str[i] > '9')
		{	
			break;
		}
		result *= 10;
		result += (str[i] - 48);
		i++;
	}

	return (result * sign);
}
*/

int		main(void)
{
	char *inputs[17] = {
		"-2147483647", "2147483647",
		"-2147483648", "2147483648",
		"-9999999999", "9999999999",
		"0", "123hello", "hello123",
		"abc123def", "123abc456",
		"01234", "+1", "+abc", "-abc", "- 15",
		"3  3  3"
	};
	int i = 0;
	printf("TESTS:\n");
	while (i < 17)
	{
		int a = atoi(inputs[i]);
		int b = ft_atoi(inputs[i]);
		char *test = a == b ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %12s - %12d - %12d - %s\x1B[0m\n", i, inputs[i], a, b, test);
		i++;
	}
	return (0);
}
