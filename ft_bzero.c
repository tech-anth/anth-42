/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:35:32 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/02 13:24:12 by akolomii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
		p[i++] = 0;
}
