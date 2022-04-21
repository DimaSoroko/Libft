/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:09:28 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/20 16:02:05 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

// #include <stdio.h>
// int main()
// {
// 	char *s = "-0-*-\t-Here is the string-\n-8-/-";
// 	char *result = ft_strtrim(s, "8-\t/*\n0");
// 	printf("The result after ft_strtrim is : %s\n", result);
// 	return 0;
// }