/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:24:19 by glamit            #+#    #+#             */
/*   Updated: 2018/11/09 17:45:34 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *str;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(s);
	i = 0;
	j = 0;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	while (s[i + 1] == ' ' || s[i + 1] == '\n' || s[i + 1] == '\t')
	{
		len--;
		i++;
	}
	if (!str = (char *)malloc(sizeof(char) * (len + 1)))
		return (NULL);
	while (j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
