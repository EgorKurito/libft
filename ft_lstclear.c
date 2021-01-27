/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanguy <hanguy@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 15:59:32 by hanguy            #+#    #+#             */
/*   Updated: 2020/05/26 15:08:44 by hanguy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*input;

	input = *lst;
	if (!lst)
		return ;
	while (input)
	{
		temp = input->next;
		if (del)
		{
			del(input->content);
		}
		free(input);
		input = temp;
	}
	*lst = NULL;
}
