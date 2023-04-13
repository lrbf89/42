/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:51:47 by lobufard          #+#    #+#             */
/*   Updated: 2023/04/05 14:59:38 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lstnbr;

	lstnbr = 0;
	while (lst)
	{
		lst = lst -> next;
		lstnbr ++;
	}
	return (lstnbr);
}
