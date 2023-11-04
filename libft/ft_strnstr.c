/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:52:21 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/04 23:46:08 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s,	const char *needle, unsigned long n)
{
	unsigned long	needle_len;

	needle_len = ft_strlen(needle);
	if (!needle)
		return ((char *)s);
	while (*s && n-- >= needle_len)
	{
		if (!ft_strncmp(s++, needle, needle_len))
			return ((char *)(s -= 1));
	}
	return (NULL);
}
