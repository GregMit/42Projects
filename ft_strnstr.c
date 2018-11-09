/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 20:08:13 by glamit            #+#    #+#             */
/*   Updated: 2018/11/08 22:23:58 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*fstr;

	fstr = ft_strstr(haystack, needle);
	while (len > 0)
	{
		if (fstr == NULL)
			return (NULL);
		fstr++;
		len--;
	}
	return (fstr);
}
