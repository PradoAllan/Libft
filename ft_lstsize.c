/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprado <aprado@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:58:55 by aprado            #+#    #+#             */
/*   Updated: 2023/12/03 14:01:52 by aprado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	node_qtd;

	if (lst)
	{
		node_qtd = 0;
		while (lst)
		{
			node_qtd++;
			lst = lst->next;
		}
	}
	return (node_qtd);
}
