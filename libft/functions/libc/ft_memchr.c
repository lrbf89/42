/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 03:24:28 by lobufard          #+#    #+#             */
/*   Updated: 2023/03/20 03:57:57 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = s;
	i = 0;
	while (ptr[i] && i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *) &ptr[i]);
		i++;
	}
	return (NULL);
}
