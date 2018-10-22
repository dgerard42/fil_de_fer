/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_intarraynew.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/29 15:11:16 by dgerard           #+#    #+#             */
/*   Updated: 2017/04/29 15:17:54 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				main(void)
{
	int *res;
	int size = 6;
	int i = -1;

	res = ft_intarraynew((size_t)size);
	while (i++ < (size - 1))
		printf("%d", res[i]);
	printf("\n");
}
