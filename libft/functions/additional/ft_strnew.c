/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbufarde <lbufarde@42.roma.it>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 04:04:20 by lbufarde          #+#    #+#             */
/*   Updated: 2023/03/25 04:23:55 by lbufarde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) malloc(size * (sizeof (char) + 1));
	if (str == NULL)
		return (NULL);
	while (i < size)
		str[i++] = '\0';
	return (str);
}
