/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2dstrnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 14:36:05 by dgerard           #+#    #+#             */
/*   Updated: 2017/04/06 17:54:05 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			main(void)
{
	size_t i;
	char **fresh;

	i = 5;
	fresh = ft_2dstrnew(i, (size_t)15);
	while (i)
	{
		ft_strcpy(fresh[i], "0123456789four");
		printf("%s\n", fresh[i]);
		i--;
	}
	printf("%s\n", "exit" );
}
