/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:58:37 by lobufard          #+#    #+#             */
/*   Updated: 2023/03/30 14:16:31 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i_s1;
	size_t	i_set;
	int		j;
	int		k;
	char	*trim;

	i_s1 = ft_strlen(s1);
	i_set = ft_strlen(set);
	j = 0;
	k = 0;
	trim = (char *) malloc(sizeof(char) * i_s1 + 1);
	if (trim == NULL)
		return (NULL);
	if (ft_strncmp(s1, set, i_set) == 0)
		j ++;
	if (ft_strncmp(&s1[i_s1 - i_set], set, i_set) == 0)
		k ++;
	if (j == 1 && k == 0)
		return (trim = ft_substr(s1, i_set, i_s1));
	else if (j == 0 && k == 1)
		return (trim = ft_substr(s1, 0, (i_s1 - i_set)));
	else if (j == 1 && k == 1)
		return (trim = ft_substr(s1, i_set, (i_s1 - i_set * 2)));
	return ((char *)s1);
}
