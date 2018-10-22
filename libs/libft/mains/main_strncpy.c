/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 13:46:44 by dgerard           #+#    #+#             */
/*   Updated: 2017/03/03 17:14:18 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int			main(void)
{
	size_t	len;
	char	src[] = "ziggy stardust";
	char	dst[] = "is there life on mars";
		
	len = 22;

	printf("test 00 original strncpy LEN = %zu\n", len);
	printf("test 00 original strncpy src = %s\n", src);
	printf("test 00 original strncpy dst = %s\n", dst);
	strncpy(dst, src, len);
	printf("test 00 dst after strncpy = %s\n", dst);

	char	src2[] = "ziggy stardust";
	char	dst2[] = "is there life on mars";

	printf("test 00 ft_strncpy len = %zu\n", len);	
	printf("test 00 ft_strncpy src = %s\n", src2);
	printf("test 00 ft_strncpy dst = %s\n", dst2);
	ft_strncpy(dst2, src2, len);
	printf("test 00 dst after ft_strncpy = %s\n", dst2);

	size_t	len2;
	char	src3[] = "ground control to major tom";
	char	dst3[] = "we smoke astro turf on mars";
		
	len2 = 8;
	
	printf("test 01 original strncpy len = %zu\n", len2);
	printf("test 01 original strncpy src = %s\n", src3);
	printf("test 01 original strncpy dst = %s\n", dst3);
	strncpy(dst3, src3, len2);
	printf("test 01 dst after strncpy = %s\n", dst3);

	char	src4[] = "ground control to major tom";
	char	dst4[] = "we smoke astro turf on mars";
}
*/
void		main2(void)
{
	char dest[12];
	char stddest[12];

	ft_memset(dest, '\0', 12);
	memset(stddest, '\0', 12);
	dest[10] = 'X';
	stddest[10] = 'X';
	ft_strncpy(dest, "strncpy..><is not NUL-terminated", 10);
	strncpy(stddest, "strncpy..><is not NUL-terminated", 10);
	printf("\nExp: strncpy..>X\nYou: %s\n", dest);
	printf("Lib: %s\n", stddest);
	if (0 != ft_memcmp(dest, stddest, 12))
		printf("FAIL\n");
	ft_memset(dest, 'X', 12);
	memset(stddest, 'X', 12);
	ft_strncpy(dest, "short", 10);
	strncpy(stddest, "short", 10);
	printf("\nExp: short\nYou: %s\nLib: %s\n", dest, stddest);
	if (0 != ft_memcmp(dest, stddest, 12))
		printf("FAIL\n");
	printf("\nExp: short[9] = %d; short[10] = %d\n", 0, 'X');
	printf("You: short[9] = %d; short[10] = %d\n", dest[9], dest[10]);
	printf("Lib: short[9] = %d; short[10] = %d\n", stddest[9], stddest[10]);
	if ((dest[9] != stddest[9]) || (dest[10] != stddest[10]))
		printf("FAIL\n");
}

int		main(void)
{
	char buf[20];
	char stdbuf[20];

	ft_memset(buf, 'X', 20);
	memset(stdbuf, 'X', 20);
	buf[15] = 0;
	buf[4] = 0;
	buf[0] = '_';
	stdbuf[15] = 0;
	stdbuf[4] = 0;
	stdbuf[0] = '_';
	ft_strncpy(buf + 1, "0123456789", 10);
	strncpy(stdbuf + 1, "0123456789", 10);
	if (0 != ft_memcmp(buf, stdbuf, 20))
		printf("FAIL\n");
	printf("You: %s\n", buf);
	printf("Lib: %s\n", stdbuf);
	ft_strncpy(buf + 1, "0123456789", 11);
	strncpy(stdbuf + 1, "0123456789", 11);
	if (0 != ft_memcmp(buf, stdbuf, 20))
		printf("FAIL\n");
	printf("You: %s\n", buf);
	printf("Lib: %s\n", stdbuf);
	printf("\n");
	main2();
	printf("Done\n");
}
