/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:36:11 by lobufard          #+#    #+#             */
/*   Updated: 2023/04/05 15:46:29 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lstref;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		lstref = lst -> next;
		del(lst);
		free(lst);
		*lst = lstref;
	}
}
