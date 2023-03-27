/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbufarde <lbufarde@42.roma.it>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 02:51:24 by lbufarde          #+#    #+#             */
/*   Updated: 2023/03/25 03:31:25 by lbufarde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memalloc(size_t size)
{
	void	*newmem;

	newmem = (void *) malloc(size);
	if (newmem == NULL)
		return (NULL);
	ft_bzero(newmem, size);
	return (newmem);
}
