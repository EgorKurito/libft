/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanguy <hanguy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 15:16:24 by hanguy            #+#    #+#             */
/*   Updated: 2020/05/30 08:28:25 by hanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long int	res;

	res = 0;
	sign = 1;
	while (*str && (*str == '\t' || *str == '\n' || *str == '\v'
				|| *str == '\f' || *str == '\r' || *str == ' '))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		if (res > 922337203685477580 && sign == 1)
			return (-1);
		else if (res > 922337203685477580 && sign == -1)
			return (0);
		res = res * 10 + (*str - 48);
		str++;
	}
	return (sign * res);
}
