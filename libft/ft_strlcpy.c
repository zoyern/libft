/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 01:00:16 by almounib          #+#    #+#             */
/*   Updated: 2023/10/31 16:24:07 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int sz)
{
	unsigned int	i;

	i = 0;
	if (!sz)
		return (ft_strlen(src));
	while (i++ < sz - 1)
		*dst++ = *src++;
	dst[i] = '\0';
	return (ft_strlen(src));
}
