/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoroko <disoroko@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:33:00 by dsoroko           #+#    #+#             */
/*   Updated: 2022/04/19 17:08:13 by dsoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	return (ft_memcpy(dst, src, len));
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dst[100] = "Hello";
// 	char src[100] = "here is the string";
// 	ft_memmove(dst, src, 20);
// 	printf("dst after ft_memmove: |%s|\n", dst);
// 	memmove(dst, src, 5);
// 	printf("dst after memmove: |%s|\n", dst);	
// 	return 0;
// }
