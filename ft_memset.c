/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:17:24 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/02 13:11:26 by akolomii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
		p[i++] = (unsigned char)c;
	return (s);
}
