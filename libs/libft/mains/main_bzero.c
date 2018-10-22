/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:19:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/01 20:03:32 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
   char str[]="mundo lindo";
   char str2[]= "mundo lindo";

   printf("originalstring: %s\n", str);
   bzero(str, 0);
   printf("newstring: %s\n", str);

   printf("originalstring: %s\n", str2);
   ft_bzero(str2, 0);
   printf("newstring: %s\n", str2);
   
   return(0);
}
