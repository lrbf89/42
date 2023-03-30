/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:19:00 by lobufard          #+#    #+#             */
/*   Updated: 2023/03/30 17:07:23 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	char_for_n(int n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i ++;
	}
	return (i);
}

static char	*core_itoa(long n, char *itoa, int sign)
{
	int	i;

	if (n < 0)
		n = -n;
	i = char_for_n(n) + sign - 1;
	while (i >= sign)
	{
		itoa[i] = n % 10 + 48;
		n = n / 10;
		i --;
	}
	return (itoa);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		sign;

	if (n >= 0)
		sign = 0;
	else
		sign = 1;
	if (n == -2147483648)
	{
		itoa = ft_strdup("-2147483648");
		return (itoa);
	}
	itoa = (char *) malloc(char_for_n(n) + sign + 1);
	if (itoa == NULL)
		return (NULL);
	if (sign == 1)
		itoa[0] = '-';
	core_itoa(n, itoa, sign);
	if (n == 0)
		itoa[0] = '0';
	itoa[char_for_n(n) + 1] = '\0';
	return (itoa);
}
