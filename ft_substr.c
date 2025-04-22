/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:00:12 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/21 19:30:15 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	sub_len;
	char			*sub_s;

	sub_len = 0;
	while (s[sub_len + start] != '\0' && sub_len < len)
		sub_len++;
	sub_s = (char *) malloc((sub_len + 1) * sizeof(const char));
	if (sub_s == NULL)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		sub_s[i] = s[start + i];
		i++;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
