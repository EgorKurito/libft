/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanguy <hanguy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:26:31 by hanguy            #+#    #+#             */
/*   Updated: 2020/06/22 16:26:33 by hanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_abs(int i)
{
	return (i >= 0 ? i : -i);
}

long long	ft_llabs(long long ll)
{
	return (ll >= 0 ? ll : -ll);
}

double		ft_fabs(double d)
{
	return (d >= 0 ? d : -d);
}
