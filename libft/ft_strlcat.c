/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almounib <almounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 01:42:58 by almounib          #+#    #+#             */
/*   Updated: 2023/10/31 01:47:28 by almounib         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dst, const char *restrict src, unsigned int sz)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = ft_strulen(dst);
	src_len = ft_strulen(src);
	i = 0;
	j = 0;
	if (sz < 1)
		return (src_len + sz);
	while (dst[i] != '\0')
		i++;
	while (src[j] && i < sz - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (sz < dest_len)
		return (sz + src_len);
	else
		return (dest_len + src_len);
}
