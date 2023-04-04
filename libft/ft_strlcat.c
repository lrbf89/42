/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 03:05:25 by lobufard          #+#    #+#             */
/*   Updated: 2023/04/04 13:22:56 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		lenght;
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	lenght = ft_strlen(src) + ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && j + i < size - 1)
	{
		dst[j + i] = src[j];
		j++;
	}
	if (i < size)
		dst[j + i] = 0;
	else
		return (ft_strlen(src) + size);
	return (lenght);
}
