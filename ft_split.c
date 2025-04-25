/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:27:40 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/25 12:53:05 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

static size_t	count_words(char const *s, char c);
static char		*split_word(size_t *src_i, const char *src, char c);
static void		free_arr(char **arr);

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
			arr[i] = split_word(&j, &s[j], c);
			if (arr[i] == NULL)
			{
				free_arr(arr);
				free(arr);
				return (NULL);
			}
			i++;
		}
		j++;
	}
	arr[words] = NULL;
	return (arr);
}

static size_t	count_words(char const *s, char c)
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

static char	*split_word(size_t *src_i, const char *src, char c)
{
	size_t	i;
	size_t	len;
	char	*dest;

	len = 0;
	while (src[len] != c && src[len] != '\0')
		len++;
	*src_i += len;
	dest = (char *) malloc ((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static void	free_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr[i]);
}
