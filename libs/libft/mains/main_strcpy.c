/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 20:59:06 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/03 13:22:52 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
   char src[40];
   char dst[100];
   
   memset(dst, '\0', sizeof(dst));
   strcpy(src, "show me what u got");
   strcpy(dst, src);

   printf("strcpy final copied string: %s\n", dst);
   
   char src2[40];
   char dst2[100];

   memset(dst, '\0', sizeof(dst));
   ft_strcpy(src2, "show me what u got");
   ft_strcpy(dst2, src2);
   
   printf("ft_strcpy final copied string: %s\n", dst2);
}
