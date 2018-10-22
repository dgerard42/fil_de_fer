/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 17:55:06 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/19 18:14:05 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int 		main(void)
{
	char *s[10] = {
		" what a world", "    what a life", "when i was a child ",
		"I caught a fleeting glimpse     ", " out of the corner of my eye ",
		"   there is no pain you are receding   ", "you are only coming through in waves",
		"pink floyd", "your   lips    move", ""
	};

	char *eres[10] = {
		"whata world", "what a life", "when i was a child",
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
	char a[] = "****split*this******string*";
	char **res;
	res	= (ft_strsplit(a, '*'));
	printf("word 1: ---|%s|---\n", res[0]);
	if (res[1])
		printf("word 2: ---|%s|---\n", res[1]);
	if (res[2])
		printf("word 3: ---|%s|---\n", res[2]);
}
