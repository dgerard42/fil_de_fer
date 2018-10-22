/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 21:41:27 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/06 09:34:02 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char string[] = "space cowboy";
	printf("input string = %s\n", string);
	ft_strclr(string);
	printf("string after ft_strclr = %s\n", string);
}
