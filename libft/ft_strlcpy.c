/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 01:00:16 by almounib          #+#    #+#             */
/*   Updated: 2023/11/04 18:11:49 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long sz)
{
	unsigned long	len;

	len = (ft_strlen(src));
	if (!sz)
		return (len);
	while (*src && sz-- - 1)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
