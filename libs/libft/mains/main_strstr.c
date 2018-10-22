/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 17:11:09 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/13 22:43:48 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int			main(void)
{
	char *big [4] = {
		"vincit qui se vincit", "vincit qui se vincit",
		"vincit qui se vincit", "vincit qui se se vincit"
	};

	char *little [4] = {
		"se", "", "aurelius", "se"
	};
	
	int i = 0;
	while (i < 4)
	{
		char *res;
		char *ft_res;
		res = strstr((const char*)big[i], (const char*)little[i]);
		ft_res = ft_strstr((const char*)big[i], (const char*)little[i]);
		printf("|||input ==%s, %s|||strstr ouput ==%s|||ft_strstr output ==%s|||\n", big[i], little[i], res, ft_res);
		i++;
	}
}
*/

typedef struct	{
	char	*hay;
	char	*ned;
	size_t	n;
}			t_testcase;

t_testcase	g_tests[] = {
	{"Beginning of string", "Begin", 30},
	{"Beginning of string", "Begin", 5},
	{"Beginning of string", "Begin", 6},
	{"End of string\0a", "ing\0b", 14},
	{"End of string_a", "ing_b", 13},
	{"End of string_a", "ing_b", 14},
	{"End of string_a", "ing_b", 15},
	{"Matches twice twice", "twice", 100},
	{"Matches twice twice", "twice", 13},
	{"Matches twice twice", "twice", 12},
	{"Empty search", "", 10},
	{"Empty search", "", 0},
	{"Not found", "pineapple", 100},
	{"Not found", "pineapple", 2},
	{"worl hahahahoha", "haho", 100},
	{"", "", 0},
};

void		test_strstr(void)
{
	int		i;
	char	*result;
	char	*stdlib;

	i = 0;
	while (i < (int)(sizeof(g_tests) / sizeof(t_testcase)))
	{
		result = ft_strstr(g_tests[i].hay, g_tests[i].ned);
		stdlib = strstr(g_tests[i].hay, g_tests[i].ned);
		if (stdlib && result)
		{
			if (strcmp(stdlib, result))
			{
				printf("strstr('%s', '%s')\n", g_tests[i].hay,
						g_tests[i].ned);
				printf("Lib: %s\nYou: %s\n", stdlib, result);
				printf("FAIL\n");
			}
		}
		else if ((!!stdlib) ^ (!!result))
		{
			printf("strstr('%s', '%s')\n", g_tests[i].hay,
					g_tests[i].ned);
			printf("Lib: %s\nYou: %s\n", stdlib, result);
			printf("FAIL\n");
		}
		i++;
	}
}

void		test_strnstr(void)
{
	int		i;
	char	*result;
	char	*stdlib;

	i = 0;
	while (i < (int)(sizeof(g_tests) / sizeof(t_testcase)))
	{
		result = ft_strnstr(g_tests[i].hay, g_tests[i].ned, g_tests[i].n);
		stdlib = strnstr(g_tests[i].hay, g_tests[i].ned, g_tests[i].n);
		if (stdlib && result)
		{
			if (strcmp(stdlib, result))
			{
				printf("strnstr('%s', '%s', %ld)\n", g_tests[i].hay,
						g_tests[i].ned, g_tests[i].n);
				printf("Lib: %s\nYou: %s\n", stdlib, result);
				printf("FAIL\n");
			}
		}
		else if ((!!stdlib) ^ (!!result))
		{
			printf("strnstr('%s', '%s', %ld)\n", g_tests[i].hay,
					g_tests[i].ned, g_tests[i].n);
			printf("Lib: %s\nYou: %s\n", stdlib, result);
			printf("FAIL\n");
		}
		i++;
	}
}

int			main(void)
{
	test_strstr();
	test_strnstr();
	printf("Done\n");
	return (0);
}

/*
int			main(void)
{
	char *res;
	char *ft_res;

	res = ft_strnstr("Not found", "pineapple", 100);
	ft_res = strnstr("Not found", "pineapple", 100);
	printf("RES = %s FT_RES = %s\n", res, ft_res);
}
*/
