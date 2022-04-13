/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:18:02 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/13 15:12:52 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (s1 == s2 || n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	const void *s1 = "Hello";
	const void *s2 = "hello";
	int ret = memcmp(s1, s2, 5);
	int ret2 = ft_memcmp(s1, s2, 5);
	printf("%d\n", ret);
	printf("%d\n", ret2);
}
*/