/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:58:53 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 16:27:27 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

int	function()
{	
	printf("Hello\n");
	if (!(ft_memchr("abcdef", 'a', 5) == memchr("abcdef", 'a', 5)))
		printf("Error1\n");
	printf("Seg Here 1\n");
	if(!(ft_memchr("abcdef", 'c', 5) == memchr("abcdef", 'c', 5)))
		printf("Error2\n");
	printf("Seg Here 2\n");
	if(!(ft_memchr("abcdef", '\0', 7) == memchr("abcdef", '\0', 7)))
		printf("Error3\n");
	printf("Seg Here 3\n");
	if(!(ft_memchr("abcdef", 'z', 6) == memchr("abcdef", 'z', 6)))
		printf("Error4\n");
	printf("Seg Here 4\n");
	if(!(ft_memchr("abcdef", 999, 6) == memchr("abcdef", 999, 6)))
		printf("Error5\n");
	printf("Seg Here 5\n");

	/* Barbarian test from Qperez !! */
	char			ctab[11];
	int				itab[11];
	unsigned long	ltab[11];
	size_t			j;
	int				i;

	i = -300;
	printf("Seg Here 6\n");
	ft_memchr(NULL, 0, 0);
	printf("Seg Here 7\n");
	while (i < 300)
	{
		j = 0;
		while (j < 11)
		{
			ctab[j] = (char)rand();
			itab[j] = rand();
			ltab[j] = (unsigned long)rand() * 10000;
			j++;
		}
		if ((memchr(ctab, i, sizeof(ctab)) != ft_memchr(ctab, i, sizeof(ctab)))
			|| ((memchr(itab, i, sizeof(itab)) != ft_memchr(itab, i, sizeof(itab))))
			|| (memchr(ltab, i, sizeof(ltab)) != ft_memchr(ltab, i, sizeof(ltab))))
		{
			assert(!"Unsigned char problem?");
			break;
		}
		++i;
	}
/*
	ft_memchr(NULL, 0, 0);
	ft_memchr(NULL, 0, 10);
	ft_memchr(NULL, -10, 10);
*/
	return (0);
}

int main ()
{
//	function();
   char *ret;

   ret = memchr(NULL, 0, 0);
   printf("lib String after is - |%s|\n", ret);
  
   char *ret2;
  
   ret2 = ft_memchr(NULL, 0, 0);
   printf("ft String after |%c| is - |%s|\n", 999, ret2);
}
