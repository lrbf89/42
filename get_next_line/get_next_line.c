/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:33:05 by lobufard          #+#    #+#             */
/*   Updated: 2023/04/14 00:21:19 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *) s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

size_t	chrpos(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{	
			i++;
			return (i);
		}
		i ++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i ++;
	return (i + 1);
}

char	*ft_strdup(const char *s)
{	
	char	*str;
	size_t	i;

	str = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i ++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sbstr;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sbstr = ft_strdup("\0");
		return (sbstr);
	}
	if (len < ft_strlen(s))
		sbstr = (char *) malloc(sizeof(char) * len + 1);
	else
		sbstr = (char *) malloc(sizeof(char) * ft_strlen(s) - start + 1);
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

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	i = -1;
	j = 0;
	if (!s1)
	{
		s1 = (char *) malloc(1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	newstr = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (newstr == NULL)
		return (NULL);
	if (s1)
		while (s1[++i] != '\0')
			newstr[i] = s1[i];
	while (s2[j] != '\0')
		newstr[i++] = s2[j++];
	newstr[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (newstr);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*buf_read;
	char		*newline;
	int		bytes_read;
	int		bytes_left;
	int		n;
    int BUFFER_SIZE= 6;

	buf_read = (char *) malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buf_read == NULL)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(line, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buf_read, BUFFER_SIZE);
		buf_read[bytes_read] = '\0';
		line = ft_strjoin(line, buf_read);
	}
	n = chrpos(line, '\n');
	bytes_left = ft_strlen(line) - n;
	newline = ft_substr(line, 0, n);
	line = ft_substr(line, n, bytes_left);
	printf("FINAL = %s\n\n END function \n\n", newline);
	return (newline);
}

int	main(void)
{
	char	fd;

	fd = open("prova.txt", O_RDONLY);
	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);
	return 0;

}
