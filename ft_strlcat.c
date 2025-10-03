/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:08:31 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/03 15:08:33 by akolomii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, const char *src, int n)
{
	int	i;
	int	dl;
	int	sl;

	i = 0;
	dl = 0;
	sl = 0;
	while ((dl < n) && (dest[dl] != '\0'))
		dl++;
	while (src[sl] != '\0')
		sl++;
	if (dl == sl)
		return (sl + n);
	while (i < n - 1)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}
