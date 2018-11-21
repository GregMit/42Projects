/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:51:56 by glamit            #+#    #+#             */
/*   Updated: 2018/11/16 22:20:27 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*len;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (!(len = (char*)malloc(sizeof(char) * i + 1)))
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		len[i] = s1[i];
		i++;
	}
	len[i] = '\0';
	return (len);
}
