/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:48:17 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/03 23:14:08 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	start;
	unsigned long	end;
	unsigned long	len;
	char			*t;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	end = len - 1;
	while (start < len && !ft_strchr(set, s1[start]))
		start++;
	while (end > start && !ft_strrchr(set, s1[end]))
		end--;
	end = len - end;
	t = (char *)malloc(sizeof(char) * ((end - start) + 1));
	ft_strlcpy(t, s1 + start, end - start + 1);
	return (t);
}
