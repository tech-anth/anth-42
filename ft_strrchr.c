/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:48:49 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/07 11:52:04 by akolomii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	int	length;

	length = ft_strlen((char *) str);
	while (length >= 0)
	{
		if ((unsigned char) str[length] == (unsigned char) c)
			return ((char *) &str[length]);
		length--;
	}
	return (NULL);
}
