/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanguy <hanguy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 11:08:38 by hanguy            #+#    #+#             */
/*   Updated: 2020/05/24 09:01:42 by hanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		get_words_count(char const *s, char c)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			res++;
		i++;
	}
	return (res);
}

static	int		len(const char *s, char c, int i)
{
	int		res;

	res = 0;
	while (s[i] != c && s[i] != '\0')
	{
		res++;
		i++;
	}
	return (res);
}

static	char	**freee(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

char			**prepare(char const *s, char c, char **str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			k = 0;
			if (!(str[j] = (char *)malloc(sizeof(char) * len(s, c, i) + 1)))
				return (freee((char const **)str, j));
			while (s[i] != c && s[i] != '\0')
				str[j][k++] = s[i++];
			str[j++][k] = '\0';
		}
		if (s[i] != '\0')
			i++;
	}
	str[j] = NULL;
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (get_words_count(s, c) + 1))))
		return (NULL);
	return (prepare(s, c, str));
}
