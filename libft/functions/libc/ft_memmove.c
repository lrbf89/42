/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 02:41:44 by lobufard          #+#    #+#             */
/*   Updated: 2023/03/20 03:08:22 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*lastd;
	const unsigned char	*lasts;

	d = dest;
	s = src;
	lastd = d + (n - 1);
	lasts = s + (n - 1);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
		while (n--)
			*lastd-- = *lasts--;
	return (dest);
}
