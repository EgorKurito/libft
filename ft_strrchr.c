/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanguy <hanguy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 12:34:14 by hanguy            #+#    #+#             */
/*   Updated: 2020/05/02 12:49:37 by hanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	len = 0;
	str = (char *)s;
	len = (int)ft_strlen(s);
	if (c == '\0')
		return (str + len);
	while (len--)
		if (*(str + len) == (char)c)
			return (str + len);
	return (NULL);
}
