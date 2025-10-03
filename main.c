/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:21:45 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/02 14:21:48 by akolomii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char dest[30] = "Konichiwa, cha-cha-cha!";
	const char src[20] = "Hello!";
	printf("variable src before ft_strlcat(): %s\n", src);
	int l = ft_strlcat(dest, src, 10);
	printf("variable dest after ft_strlcat(): %s, Length = %d\n", dest, l);
	return (0);
}
