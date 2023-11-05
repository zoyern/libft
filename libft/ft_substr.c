/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:14:45 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/05 16:42:39 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned long start, unsigned long len)
{
	char			*t;
	unsigned long	i;

	t = (char *)malloc(sizeof(char) * (len + 1));
	if (!t)
		return (NULL);
	s += start;
	i = 0;
	while (*s && i++ < len)
		*t++ = *s++;
	*t = '\0';
	return (t -= i - 1);
}
