/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:06:27 by glamit            #+#    #+#             */
/*   Updated: 2018/11/08 23:18:25 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	c;

	i = 0;
	c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0' && c < n)
	{
		s1[i + c] = s2[c];
		c++;
	}
	s1[i + c] = '\0';
	return (s1);
}
