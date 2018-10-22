/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 11:48:16 by dgerard           #+#    #+#             */
/*   Updated: 2017/06/04 15:39:32 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				main(void)
{
	float a = 42;
	float b = 420;

	ft_swap((unsigned char *)&a, (unsigned char *)&b, (size_t)4);
	printf("a = %f, b = %f\n", a, b);
}
