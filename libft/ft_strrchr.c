/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:34:19 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/04 19:06:42 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	len;

	len = ft_strlen(s) - 1;
	s += len;
	while (len-- + 1)
		if (*s-- == c)
			return ((char *)(s += 1));
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
