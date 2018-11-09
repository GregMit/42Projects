/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:23:13 by glamit            #+#    #+#             */
/*   Updated: 2018/11/08 23:27:51 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	size_t c;

	i = 0;
	c = 0;
	while (dst[i] != '\0')
		i++;
	while (src[c] != '\0' && c < size)
	{
		dst[i + c] = src[c];
		c++;
	}
	dst[i + c] = '\0';
	return ((size_t)dst);
}
