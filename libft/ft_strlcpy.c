/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almounib <almounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 01:00:16 by almounib          #+#    #+#             */
/*   Updated: 2023/10/31 01:42:04 by almounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strulen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dst, const char *restrict src, unsigned int sz)
{
	unsigned int	i;

	i = 0;
	if (!sz)
		return (ft_strulen(src));
	while (i++ < sz - 1)
		*dst++ = *src++;
	dst[i] = '\0';
	return (ft_strulen(src));
}
