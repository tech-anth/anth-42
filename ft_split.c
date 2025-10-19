/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:17:47 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/16 08:27:18 by akolomii         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		cnt++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (cnt);
}

static char	*ft_strndup(char const *str, const size_t n)
{
	size_t	i;
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static void	*free_split(char **arr, size_t used)
{
	while (used > 0)
		free(arr[--used]);
	free(arr);
	return (NULL);
}

static char	**handle_split(char const *s, char c,
							size_t cnt_words, size_t i)
{
	size_t	split_index;
	size_t	len;
	char	**split;

	split = (char **)malloc(sizeof(char *) * (cnt_words + 1));
	if (!split)
		return (NULL);
	split_index = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		len = 0;
		while (s[i + len] != '\0' && s[i + len] != c)
			len++;
		split[split_index] = ft_strndup(&s[i], len);
		if (!split[split_index])
			return (free_split(split, split_index));
		split_index++;
		i += len;
	}
	split[split_index] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	cnt_words;
	char	**split;

	i = 0;
	if (!s)
		return (NULL);
	cnt_words = count_words(s, c);
	split = handle_split(s, c, cnt_words, i);
	return (split);
}
