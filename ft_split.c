/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:27:40 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/22 16:59:25 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	arr_len;

	arr_len = arrlen(s, c);
	arr = (char **) malloc ((arr_len + 1) * sizeof(char *));	
	fillarr(arr, s, c);
	return (arr);
}

size_t	arrlen(char const *s, char c)
{
	size_t	i;
	bool	new_str;
	size_t	len;

	i = 0;
	new_str = true;
	len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && new_str = true)
		{
			len++;
			new_str = false;
		}
		else if (s[i] == c)
			new_str = true;
		i++;
	}
	return (len);
}

void	fillarr(char **arr, const char *s, char c)
{
	
}
