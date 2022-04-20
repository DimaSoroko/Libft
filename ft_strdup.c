/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:44:41 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/20 11:18:38 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(str));
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	printf("%s\n", ft_strdup("hello"));
// 	printf("%s\n", strdup("hello"));
// }