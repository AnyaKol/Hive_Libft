/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:27:40 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 16:17:19 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

size_t	count_words(char const *s, char c);
size_t	split_word(char *dest, const char *src, char c);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;
	size_t	i;
	size_t	j;

	words = count_words(s, c);
	arr = (char **) malloc ((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words)
	{
		if (s[j] != c)
		{
			j = j + split_word(arr[j], &s[j], c);
			i++;
		}
		j++;
	}
	arr[words] = NULL;
	return (arr);
}

size_t	count_words(char const *s, char c)
{
	size_t	i;
	bool	new_wrd;
	size_t	words;

	i = 0;
	new_wrd = true;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && new_wrd == true)
		{
			words++;
			new_wrd = false;
		}
		else if (s[i] == c)
			new_wrd = true;
		i++;
	}
	return (words);
}

size_t	split_word(char *dest, const char *src, char c)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len] != c)
		len++;
	dest = (char *) malloc ((len + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	return (len);
}
