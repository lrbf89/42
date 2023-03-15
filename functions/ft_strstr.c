/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbufarde <lbufarde@42.roma.it>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:49:11 by lbufarde          #+#    #+#             */
/*   Updated: 2023/03/15 16:10:47 by lbufarde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j])
		{
			j ++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i ++;
		j = 0;
	}
	return (NULL);
}
