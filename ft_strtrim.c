/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 13:15:53 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/12 13:44:00 by akolomii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handle_error(void)
{
	char	*str;

	str = (char *)malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

int	is_include(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	if (!s1)
		return (handle_error());
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && is_include(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_include(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < (end - start))
		str[i] = s1[start + i];
	str[i] = '\0';
	return (str);
}
