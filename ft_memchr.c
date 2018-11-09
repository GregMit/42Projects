/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:36:53 by glamit            #+#    #+#             */
/*   Updated: 2018/11/08 22:17:07 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char 	a;
	unsigned char	*str;

	a = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str != a)
			str++;
		else
			return (str);
	}
	return (NULL);
}
