/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:21:55 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/19 16:57:07 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <strings.h>
// int main()
// {
// 	char dst[100] = "Here is dst";
// 	char src[100] = "Here is src";

// 	ft_memcpy(dst, src, sizeof(src));
// 	printf("dst after ft_memcpy(): %s\n", dst);
// 	memcpy(dst, src, sizeof(src));
// 	printf("dst after memcpy(): %s\n", dst);
// 	return 0;
// }