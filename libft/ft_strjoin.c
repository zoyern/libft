/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:36:46 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/03 23:14:08 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	s1_len;
	unsigned long	s2_len;
	char			*t;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	t = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!t)
		return (NULL);
	while (s1_len--)
		*t++ = *s1++;
	while (s2_len--)
		*t++ = *s2++;
	*t = '\0';
	return (t);
}
