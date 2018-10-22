/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 18:51:14 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/04 21:00:53 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			main(void)
{
	char	 	*bigptr;
	const char	*littleptr;
	char		*res;
	char big[] = "vincit qui se vincit";
	const char little[] = "se";
	bigptr = big;
	littleptr = little;
	
	char	 	*bigptrnull;
	const char	*littleptrnull;
	char		*resnull;
	char bignull[] = "vincit qui se vincit";
	const char littlenull[] = "";
	bigptrnull = bignull;
	littleptrnull = littlenull;
	
	char	 	*bigptrnomatch;
	const char	*littleptrnomatch;
	char		*resnomatch;
	char bignomatch[] = "vincit qui se vincit";
	const char littlenomatch[] = "aurelius";
	bigptrnomatch = bignomatch;
	littleptrnomatch = littlenomatch;

	char	 	*bigptrdub;
	const char	*littleptrdub;
	char		*resdub;
	char bigdub[] = "vincit qui se se vincit";
	const char littledub[] = "se vincit";
	bigptrdub = bigdub;
	littleptrdub = littledub;

	res = strstr(big, little);
	resnull = strstr(bigptrnull, littleptrnull);
	resnomatch = strstr(bigptrnomatch, littleptrnomatch);	
	resdub = strstr(bigptrdub, littleptrdub);

	printf("strstr compatible result = %s\n", res);
	printf("strstr nothing in little result = %s\n", resnull);
	printf("strstr no match result = %s\n", resnomatch);
	printf("strstr double match result = %s\n", resdub);
/*
	char	 	*bigptr2;
	const char	*littleptr2;
	char		*res2;
	char big2[] = "vincit qui se vincit";
	const char little2[] = "se";
	bigptr2 = big2;
	littleptr2 = little2;
	
	char	 	*bigptrnull2;
	const char	*littleptrnull2;
	char		*resnull2;
	char bignull2[] = "vincit qui se vincit";
	const char littlenull2[] = "";
	bigptrnull2 = bignull2;
	littleptrnull2 = littlenull2;
	
	char	 	*bigptrnomatch2;
	const char	*littleptrnomatch2;
	char		*resnomatch2;
	char bignomatch2[] = "vincit qui se vincit";
	const char littlenomatch2[] = "aurelius";
	bigptrnomatch2 = bignomatch2;
	littleptrnomatch2 = littlenomatch2;

	res2 = ft_strstr(bigptr2, littleptr2);
	resnull2 = ft_strstr(bigptrnull2, littleptrnull2);
	resnomatch2 = ft_strstr(bigptrnomatch2, littleptrnomatch2);

	printf("ft_strstr compatible result = %s\n", res2);
	printf("ft_strstr nothing in little result = %s\n", resnull2);
	printf("ft_strstr no match result = %s\n", resnomatch2); */
}
