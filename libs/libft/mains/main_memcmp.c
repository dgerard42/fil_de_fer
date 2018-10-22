/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 16:28:14 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 17:34:56 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "ABCDEF", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0)
   {
      printf("str2 is less than str1");
   }
   else if(ret < 0) 
   {
      printf("str1 is less than str2");
   }
   else 
   {
      printf("str1 is equal to str2");
   }

   char sstr1[15];
   char sstr2[15];
   int rret;

   memcpy(sstr1, "ABCDEF", 6);
   memcpy(sstr2, "ABCDEF", 6);

   rret = ft_memcmp(sstr1, sstr2, 5);

   if(rret > 0)
   {
      printf("sstr2 is less than sstr1");
   }
   else if(rret < 0) 
   {
      printf("sstr1 is less than sstr2");
   }
   else 
   {
      printf("sstr1 is equal to sstr2");
   }
}
