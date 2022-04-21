/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:44:41 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/21 15:03:24 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	printf("%s\n", ft_strdup("Jambonfromagequiroulemal"));
// 	printf("%s\n", strdup("Jambonfromagequiroulemal"));
// }