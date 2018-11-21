/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:51:54 by glamit            #+#    #+#             */
/*   Updated: 2018/11/20 18:34:37 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (s == NULL)
		return (NULL);
	tab = (char**)malloc(ft_count_words(s, c) * sizeof(*tab));
	if (tab == NULL)
		return (NULL);
	ft_count_word_letters(s, c, tab);
	tab = ft_split_words(s, c, tab);
	return (tab);
}
