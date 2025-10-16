/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:55:48 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/14 21:35:59 by anth             ###   ########.fr       */
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
	size_t	sl;
	char	*sub_str;

	if (!s)
		return (handle_error());
	i = 0;
	sl = ft_strlen(s);
	if (len > sl)
		len = sl - start;
	if (sl <= start)
		return (handle_error());
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		sub_str[i++] = s[start++];
	}
	sub_str[i] = '\0';
	return (sub_str);
}
