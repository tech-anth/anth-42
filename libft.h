/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomii <akolomii@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 09:35:25 by akolomii          #+#    #+#             */
/*   Updated: 2025/10/03 09:35:27 by akolomii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *s, int c, int n);
void	ft_bzero(void *s, int n);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memmove(void *dest, const void *src, int n);
char	*ft_strlcpy(char *dest, const char *src, int n);
char	*strlcat(char *dest, const char *src, int n);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(char *str, int c);
int	ft_strncmp(char *s1, char *s2, int n);
void	*ft_memchr(const void *str, int c, int n);
int	ft_memcmp(const char *s1, const char *s2, int n);
char	*ft_strnstr(const char *str, const char *sub, int n);
int	ft_atoi(const char *nptr);
void	*ft_calloc(int nmemb, int size);
void	ft_strdup(const char *s);
#endif
