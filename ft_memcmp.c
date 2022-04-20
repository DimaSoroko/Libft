/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:18:02 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/20 14:09:46 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] == str2[i] && n > 0)
	{
		i++;
		n--;
	}
	return (str1[i] - str2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	const void *s1 = "Hello";
// 	const void *s2 = "HellO";
// 	int ret = memcmp(s1, s2, 5);
// 	int ret2 = ft_memcmp(s1, s2, 5);
// 	printf("%d\n", ret);
// 	printf("%d\n", ret2);
// }

//Функция memcmp побайтно сравнивает два массива (области памяти), 
//на которые указывают аргументы s1 и s2.
//Каждый байт массива определяется типом unsigned char.
//Сравнение продолжается, пока не будут проверено n байт или пока не встретятся отличающиеся байты.