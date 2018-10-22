/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 12:52:11 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/03 13:15:50 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	const char 	*src;
	char		*dst;
	const char	*src2;
	char		*dst2;

	src = "show me what u got";
	dst = "wiuhewiuhewiuheiwuheiwheiw";
	src2 = "show me what u got";
	dst2 = "wjeoweugrbejriweurhewkjrgew";

	printf("original strcpy src = %s\n", src);
	printf("original strcpy dst = %s\n", dst);
	printf("dst after strcpy = %s\n", strcpy(dst, (const char*)src));	
}
