/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanguy <hanguy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 07:12:17 by hanguy            #+#    #+#             */
/*   Updated: 2020/10/11 07:12:17 by hanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			is_num(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}
