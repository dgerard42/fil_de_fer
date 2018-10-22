/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 12:27:32 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/05 17:59:25 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	size_t size;
	char *res;

	size = 4;
	res = ft_strnew(size);
	printf("new nulled out string = %s\n", res);	
}
