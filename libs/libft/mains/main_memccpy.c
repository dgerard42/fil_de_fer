/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:19:49 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/02 12:43:06 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

it main (void)
{
	char dest[] = "Pushkin was born into Russian nobility in Moscow";
	char src[] = "Alexander Sergeyevich Pushkin";

	printf("%s\n", memccpy(dest, src, 'y', 9));
	printf("%s\n", ft_memccpy(dest, src, 'y', 9));
	printf("%s\n", memccpy(dest, src, 'y', 16));
	printf("%s\n", ft_memccpy(dest, src, 'y', 16));
}
