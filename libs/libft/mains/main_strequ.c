/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 17:11:34 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/06 18:18:28 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int i;
	char s1[] = "benedict";
	char s2[] = "beatrice";

	i = ft_strequ(s1, s2);
	printf("original strings = %s, %s\n", s1, s2);
	printf("match int res = %d\n", i);
}
