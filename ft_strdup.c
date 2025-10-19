/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:15:41 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/01 14:38:28 by akolomii         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	int		i;
	size_t	len;
	size_t	size;
	char	*ptr;

	i = 0;
	len = ft_strlen(s);
	size = sizeof(s[0]);
	ptr = (char *)malloc((len + 1) * size);
	if (!ptr)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[len] = '\0';
	return ((char *) ptr);
}
