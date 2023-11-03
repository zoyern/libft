/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:01:12 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/02 09:56:18 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	len;
	char			*t;

	len = ft_strlen(s);
	t = (char *)malloc(sizeof(char *) * (len + 1));
	if (!t)
		return (NULL);
	while (len--)
		*t++ = *s++;
	*t = '\0';
	return (t);
}
