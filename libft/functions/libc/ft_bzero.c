/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 23:21:29 by lobufard          #+#    #+#             */
/*   Updated: 2023/03/19 23:43:32 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	byte;

	i = 0;
	p = s;
	byte = '\0';
	while (i < n)
	{
		p[i] = byte;
		i++;
	}
}
