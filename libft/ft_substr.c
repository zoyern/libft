/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:14:45 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/02 10:01:59 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char	*t;

	t = (char *)malloc(sizeof(char) * (len + 1));
	if (!t)
		return (NULL);
	s += start;
	while (len--)
		*t++ = *s++;
	*t = '\0';
	return (t);
}
