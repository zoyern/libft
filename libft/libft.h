/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:14:55 by zoyern            #+#    #+#             */
/*   Updated: 2023/10/31 18:07:03 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

unsigned int	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int sz);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int sz);

int	ft_toupper(int c);
int	ft_tolower(int c);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
int	ft_memcmp(const void *s1, const void *s2, unsigned int n);
char	*ft_strnstr(const char *s,	const char *needle, unsigned int n);

#endif