/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:33:05 by lobufard          #+#    #+#             */
/*   Updated: 2023/03/27 14:47:39 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*newstr;

	i = 0;
	j = ft_strlen(s1);
	k = ft_strlen(s2);
	newstr = (char *) malloc(sizeof(char) * (i + k + 1));
	if (newstr == NULL)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
		i ++;
	}
	i = 0;
	while (s2[i])
		newstr[j++] = s2[i++];
	newstr[j] = '\0';
	return (newstr);
}
