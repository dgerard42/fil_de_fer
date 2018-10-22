/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_realloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 14:36:05 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/17 11:51:00 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int					main(void)
{
	void	*ptr;
	char	*fill = "1234";

	ptr = (void *)malloc(sizeof(char) * 2);
	ptr = ft_realloc(ptr, 5);
	ft_bzero((char *)ptr, (size_t)5);
	ft_memcpy(ptr, (void *)fill, (size_t)4);
	printf("%s\n", (char *)ptr);
}
