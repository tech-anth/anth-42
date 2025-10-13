/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:37:51 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/11 17:38:22 by akolomii         ###   ########.fr       */
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

static size_t	protected_len(char const *s)
{
	if (s)
		return (ft_strlen(s));
	else
		return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*str;

	if (!s1 && !s2)
		return (handle_error());
	lens1 = protected_len(s1);
	lens2 = protected_len(s2);
	str = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!str)
		return (NULL);
	if (s1)
		ft_memcpy(str, s1, lens1);
	if (s2)
		ft_memcpy(str + lens1, s2, lens2);
	str[lens1 + lens2] = '\0';
	return (str);
}
