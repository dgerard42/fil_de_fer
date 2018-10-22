/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 12:27:32 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/05 13:36:33 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(int argc, char** argv)
{
	size_t size;
	void *res;

	size = 42;
	res = ft_memalloc(size);
	if (argc == 2)
	{
		res = (void *)argv[1];
		printf("filled malloc space = %s\n", res);	
	}
	if (argc != 2)
		printf("try again asshole!!\n");
}
