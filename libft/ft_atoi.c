/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobufard <lobufard@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:00:19 by lobufard          #+#    #+#             */
/*   Updated: 2023/03/15 17:09:46 by lobufard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	k;

	i = 0;
	sign = 1;
	k = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i ++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		k = k * 10 + str[i] - 48;
		i ++;
	}
	return (k * sign);
}
