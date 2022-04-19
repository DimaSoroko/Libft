/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 09:05:22 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/19 11:24:42 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (*dst)
		dst++;
	i = 0;
	while ((i < dstsize - (len - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s1[50] = "String1";
// 	char s2[50] = "String2";
// 	size_t dest;
// 	size_t dest2;

// 	dest = ft_strlcat(s1, s2, 3);
// 	dest2 = strlcat(s1, s2, 3);
// 	printf("Final string : %s\n", s1);
// 	printf("dest : %zu\n", dest);
// 	printf("dest : %zu\n", dest2);
// 	return (0);
// }
// char * str = "String1";