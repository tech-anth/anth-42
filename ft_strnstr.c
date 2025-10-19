/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:18:47 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/07 15:18:49 by akolomii         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *big, char const *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen((char *) little);
	if (little_len == 0)
		return ((char *) big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] != '\0' && little_len + i <= len)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
