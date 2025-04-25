/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:28:30 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 19:58:45 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <limits.h>

static bool	check_space(char c);

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (check_space(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		if (result > INT_MAX)
			return (0);
		i++;
	}
	result = result * sign;
	return (result);
}

static bool	check_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (true);
	else if (c == '\r' || c == '\t' || c == '\v')
		return (true);
	return (false);
}
