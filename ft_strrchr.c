/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:01:39 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/19 18:55:33 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	char_to_find;
	int		i;

	char_to_find = (unsigned int)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == char_to_find)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	const char str[] = "Here.is.the.string";
// 	const char ch = '.';
// 	char *result;

// 	result = ft_strrchr(str, ch);
// 	printf("String after a character is %s\n", result);
// 	result = strrchr(str, ch);
// 	printf("String after a character is %s\n", result);
// 	return (0);
// }
