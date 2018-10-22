/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:00:32 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 15:52:25 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   char dest2[] = "oldstring";
   const char src2[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   printf("Before ft_memmove dest2 = %s, src2 = %s\n", dest2, src2);
   ft_memmove(dest2, src2, 9);
   printf("After ft_memmove dest2 = %s, src2 = %s\n", dest2, src2);
}
