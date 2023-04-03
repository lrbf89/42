/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:58:37 by lobufard          #+#    #+#             */
/*   Updated: 2023/03/31 18:23:27 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_substr.c"
#include "ft_strncmp.c"

static int	found_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i_s1;
	int		j;
	int		k;
	char	*trim;

	i_s1 = ft_strlen(s1);
	j = 0;
	k = 0;
	trim = (char *) malloc(sizeof(char) * i_s1 + 1);
	if (trim == NULL)
		return (NULL);
	while (s1[j] && found_in_set(s1[j], set))
		j ++;
	while (s1[j])
		trim[k++] = s1[j++];
	printf("%s\n", trim);
	return (trim);
}

int main(void)
{
	char s1[] = "lorem ipsum dolor sit amet";
	char set[] = "rlf";

	printf("%s\n", ft_strtrim(s1, set));
}
