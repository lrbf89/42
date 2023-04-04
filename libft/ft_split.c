/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:10:03 by lobufard          #+#    #+#             */
/*   Updated: 2023/04/04 17:22:51 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_of_substr(char const *s, char c)
{
	size_t	nbr;
	size_t	i;

	nbr = 0;
	i = 0;
	while (s[i])
	{
		if (c != s[i])
		{
			nbr ++;
			while (c != s[i] && s[i])
				i ++;
		}
		else
			i ++;
	}
	return (nbr);
}

int	ft_free(char **array, int i)
{
	if (array[i] == NULL)
	{
		while (i)
			free(array[i--]);
		free(array);
		return (1);
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	i;
	size_t	k;

	i = 0;
	array = (char **) malloc(sizeof(char *) * (nbr_of_substr(s, c) + 1));
	if (s == NULL || array == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			k = 0;
			while (*s && *s != c && ++k)
				++s;
			array[i++] = ft_substr(s - k, 0, k);
			if (ft_free(array, i - 1))
				return (NULL);
		}
		else
			++s;
	}
	array[i] = 0;
	return (array);
}
