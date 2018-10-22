/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 19:42:57 by dgerard           #+#    #+#             */
/*   Updated: 2017/05/14 19:58:53 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int				main(void)
{
	char *test;
	test = "can it do it twice";

	if (ft_strchr(test, '4') || ft_strchr(test, '2'))
	{
		printf("here\n");
		return (0);
	}
	return (1);
}
