/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:02:18 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/22 12:11:16 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*s_join;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s_join = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (s_join == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		s_join[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		s_join[len1 + i] = s2[i];
		i++;
	}
	s_join[len1 + len2] = '\0';
	return (s_join);
}
