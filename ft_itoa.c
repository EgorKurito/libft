/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanguy <hanguy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 19:59:48 by hanguy            #+#    #+#             */
/*   Updated: 2020/05/19 21:14:59 by hanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		get_len(int n)
{
	int	res;

	res = 0;
	while (n != 0)
	{
		res++;
		n = n / 10;
	}
	if (res == 0)
		return (1);
	return (res);
}

static	void	itoa_isneg(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char			*ft_itoa(int n)
{
	int		len;
	char	*num;
	int		neg;

	neg = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	itoa_isneg(&n, &neg);
	len = get_len(n) + neg;
	if (!(num = (char *)malloc(len * sizeof(char) + 1)))
		return (NULL);
	num[len] = '\0';
	while (len--)
	{
		num[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		num[0] = '-';
	return (num);
}
