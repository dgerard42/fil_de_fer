/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:55:33 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 19:29:23 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char *string;
	
	string = "whatever";
	printf("string = %s\n", string);
	printf("strlen = %lu\n", strlen(string));
	printf("ft_strlen = %d\n", ft_strlen(string));
}
