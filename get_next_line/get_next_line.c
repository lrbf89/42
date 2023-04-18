/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzo <lorenzo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:33:05 by lobufard          #+#    #+#             */
/*   Updated: 2023/04/14 17:13:56 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "get_next_line.h"
#include "get_next_line_utils.c"

char	*get_line(int fd, char *line)
{
	int		bytes_read;
	char	*buf_read;

	buf_read = (char *) malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buf_read == NULL)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(line, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buf_read, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buf_read);
			return (NULL);
		}
		buf_read[bytes_read] = '\0';
		line = ft_strjoin(line, buf_read);
	}
	free(buf_read);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*newline;
	int			bytes_left;
	int			n;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = get_line(fd, line);
	if (line == NULL || line[0] == '\0')
		return (NULL);
	n = chrpos(line, '\n');
 if (!n)
  return (line);
	bytes_left = ft_strlen(line) - n;
	newline = ft_substr(line, 0, n);
	line = ft_substr(line, n, bytes_left);
	printf("FINAL = %s\n\n END function \n\n", newline);
	return (newline);
}

int	main(void)
{
	char	fd;

	fd = open("empty", O_RDONLY);
	get_next_line(fd);
	printf("\n\n EXIT \n\n");
	return (0);
}
