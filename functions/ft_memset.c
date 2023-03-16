/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbufarde <lbufarde@42.roma.it>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:42:45 by lbufarde          #+#    #+#             */
/*   Updated: 2023/03/16 12:19:57 by lbufarde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	byte;

	i = 0;
	p = s;
	byte = c;
	while (i < n)
	{
		p[i] = byte;
		i++;
	}
	return (s);
}
