/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:09:09 by lobufard          #+#    #+#             */
/*   Updated: 2023/03/27 14:33:41 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sbstr;

	i = 0;
	sbstr = (char *) malloc(sizeof(char) * len + 1);
	if (sbstr == NULL)
		return (NULL);
	while (s[i] && i < len)
	{
		sbstr[i] = s[start + i];
		i ++;
	}
	sbstr[i] = '\0';
	return (sbstr);
}
