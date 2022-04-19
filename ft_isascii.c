/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:59:44 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/19 12:35:41 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (!0);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	char c, result;

// 	c = '*';
// 	result = ft_isascii(c);
// 	printf("The result is %d\n", result);
// 	result = isascii(c);
// 	printf("The result is %d\n", result);

// 	return 0;
// }