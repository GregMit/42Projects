/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word_letters.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:14:30 by glamit            #+#    #+#             */
/*   Updated: 2018/11/20 18:34:35 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_count_word_letters(const char *s, char c, char **tab)
{
	int	i;
	int	letters;
	int	k;

	i = 0;
	k = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		letters = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			letters++;
		}
		if (letters == 0)
			break ;
		if (!(tab[k] = (char *)malloc(sizeof(char) * (letters + 1))))
			return ;
		tab[k++][letters] = '\0';
	}
	tab[k] = NULL;
}
