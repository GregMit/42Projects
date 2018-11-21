/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:33:32 by glamit            #+#    #+#             */
/*   Updated: 2018/11/16 21:20:31 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	d;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	d = (unsigned char)c;
	while (n--)
	{
		*s1++ = *s2;
		if (*s2 == d)
			return (s1);
		s2++;
	}
	return (0);
}
