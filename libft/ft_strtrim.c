/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:58:37 by lobufard          #+#    #+#             */
/*   Updated: 2023/04/04 16:42:33 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		k;
	char	*trim;

	j = 0;
	k = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (s1[j] && ft_strchr(set, s1[j]))
		j ++;
	while (k > j && ft_strchr(set, s1[k]))
		k --;
	trim = ft_substr(s1, j, k - j + 1);
	if (trim == NULL)
		return (NULL);
	return (trim);
}
