/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:19:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/01 21:18:34 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
   const char src[50] = "may the force b with u";
   char dest[50];
   char dest2[50];

   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   printf("Before ft_memcpy dest = %s\n", dest2);
   ft_memcpy(dest2, src, strlen(src)+1);
   printf("After ft_memcpy dest = %s\n", dest2);
   
   return(0);
}
