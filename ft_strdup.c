/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanguy <hanguy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 13:44:25 by hanguy            #+#    #+#             */
/*   Updated: 2020/05/22 13:39:26 by hanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *temp;
	char *dest;

	if (!(temp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (0);
	dest = temp;
	while (*s1)
		*temp++ = *s1++;
	*temp = '\0';
	return (dest);
}
