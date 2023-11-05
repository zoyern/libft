/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:14:55 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/05 16:49:13 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

unsigned long	ft_strlen(const char *s);

void			*ft_memset(void *s, int c, unsigned long n);
void			ft_bzero(void *s, unsigned long n);
void			*ft_memcpy(void *dest, const void *src, unsigned long n);
void			*ft_memmove(void *dest, const void *src, unsigned long n);

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long sz);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long sz);

int				ft_toupper(int c);
int				ft_tolower(int c);

char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);
void			*ft_memchr(const void *s, int c, unsigned long n);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
char			*ft_strnstr(const char *s,	const char *needle,
					unsigned long n);

int				ft_atoi(const char *nptr);

void			*ft_calloc(unsigned long nmemb, unsigned long size);
char			*ft_strdup(const char *s);

char			*ft_substr(char const *s, unsigned long start,
					unsigned long len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
#endif 