/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:19:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/01 19:19:50 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
   char str[]="beautiful earth";

   printf("originalstring: %s\n", str);
   ft_memset(str,'$',7);
   printf("newstring: %s\n", str);
   
   return(0);
}
