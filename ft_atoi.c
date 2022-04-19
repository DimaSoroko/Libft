/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:22:07 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/19 16:10:31 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	if (!str)
		return (0);
	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
// 	printf("%d ", ft_atoi("18446744073709551615"));
// 	printf("\n");
// 	printf("%d ", atoi("18446744073709551615"));
// 	printf("\n");
// 	printf("%d ", ft_atoi("-9223372036854775807"));
// 	printf("\n");
// 	printf("%d ", atoi("-9223372036854775807"));
// 	printf("\n");
// 	printf("%d ", ft_atoi(" ---+--+1234ab567"));
// 	printf("\n");
// 	printf("%d ", atoi(" ---+--+1234ab567"));
// 	printf("\n");
// 	printf("%d ", ft_atoi(NULL));
// 	printf("\n");
// 	printf("%d ", atoi(NULL));
// 	printf("\n");
// 	printf("%d ", ft_atoi("19489384723948723948"));
// 	printf("\n");
// 	printf("%d ", atoi("19489384723948723948"));
	
// 	return 0;
// }
