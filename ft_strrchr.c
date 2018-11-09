/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:54:28 by glamit            #+#    #+#             */
/*   Updated: 2018/11/08 22:24:09 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		len;

	len = ft_strlen(s);
	a = (char)c;
	while (len != 0 && s[len] != a)
		len--;
	if (s[len] == a)
		return ((char *)&s[len]);
	else
		return (NULL);
}
