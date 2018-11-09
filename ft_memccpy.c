/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:33:32 by glamit            #+#    #+#             */
/*   Updated: 2018/11/08 23:15:11 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t	i;
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char 	d;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	d = (unsigned char)c;
	i = 0;

	while(s2[i] != '\0' && i < n && s2[i] != d + 1)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);
}
