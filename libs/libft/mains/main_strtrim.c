/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 17:55:06 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/21 18:59:41 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//TEST CASES
//0.1 space before
//1.many spaces before
//2.1 space after
//3.many spaces after
//4.one space before and after
//5.many spaces before and after
//6.many sections of spaces in between, no cutting
//7.one section of spaces in between, no cutting
//8.a few sections of multiple spaces. no cutting
//9.empty string

/*int 		main(void)
{
	char *s[10] = {
		" what a world", "    what a life", "when i was a child ",
		"I caught a fleeting glimpse     ", " out of the corner of my eye ",
		"   there is no pain you are receding   ", "you are only coming through in waves",
		"pink floyd", "your   lips    move", ""
	};

	char *eres[10] = {
		"what a world", "what a life", "when i was a child",
		"I caught a fleeting glimpse", "out of the corner of my eye",
		"there is no pain you are receding", "you are only coming through in waves",
		"pink floyd", "your   lips    move", "(null)"
	};

	int i = 0;
	while (i < 10)
	{
		char *a = (eres[i]);
		char *b = (ft_strtrim(s[i]));
		printf("%2d-|-%12s-|-%12s-|-%12s-|-\n", i, s[i], a, b);
		i++;
	}
}*/

int			main(void)
{
	char a[] = "         ";
	char *res;
	res	= (ft_strtrim(a));
	printf("res string: ---|%s|---\n", res);
}
