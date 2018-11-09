/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:16:04 by glamit            #+#    #+#             */
/*   Updated: 2018/11/08 23:15:31 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	unsigned char 	*strd;
	unsigned char	*strs;

	strd = (unsigned char *)dst;
	strs = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dst);
}
