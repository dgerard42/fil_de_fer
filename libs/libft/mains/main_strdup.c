/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 21:41:53 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 19:50:51 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	const char *s1;

	s1 = "life, the universe, and everything";
	
	printf("original string:%s\n", s1);
	printf("my result:%s\n", ft_strdup(s1));
	printf("real function results:%s\n", strdup(s1));
}
