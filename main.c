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
//	char dest[25] = "Konichiwa, cha-cha-cha!";
//	const char src[7] = "Hello!";
//	const char src[25] = "Konichiwa, cha-cha-cha!";
//	char dest[7] = "Hello!";
//	printf("variable dest before ft_strlcat(): %s\n", dest);
//	printf("variable src before ft_strlcat(): %s\n\n", src);
//	int l = ft_strlcat(dest, src, 25);
//	printf("variable dest after ft_strlcat(): %s\nLength = %d\n", dest, l);
//	int n = 36;
//	printf("Before: %s\n", dest);
//	ft_memmove(dest, src, n);
//	printf("After: %s\n", dest);
//	printf("%c\n", ft_tolower('G'));
	size_t	n = 7;
	const char src1[7] = "Hello!";
	const char src2[25] = "Konichiwa, cha-cha-cha!";
	printf("%d\n", ft_memcmp(src1, src2, n));
	return (0);
}
