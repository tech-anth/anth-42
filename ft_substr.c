/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:55:48 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/08 12:57:09 by akolomii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handle_error(void)
{
	char	*str;

	str = (char *) malloc(1);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;

	if (!s)
		return (handle_error());
	i = 0;
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		return (handle_error());
	}
	while (s[start] != '\0' && i < len)
	{
		sub_str[i++] = s[start++];
	}
	sub_str[i] = '\0';
	return (sub_str);
}
