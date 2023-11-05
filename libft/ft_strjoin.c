/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:36:46 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/05 16:46:42 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	len;
	char			*t;

	len = ft_strlen(s1) + ft_strlen(s2);
	t = (char *)malloc(sizeof(char) * (len + 1));
	if (!t)
		return (NULL);
	while (*s1)
		*t++ = *s1++;
	while (*s2)
		*t++ = *s2++;
	*t = '\0';
	return (t -= len);
}
