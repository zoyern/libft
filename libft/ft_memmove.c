/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:38:03 by almounib          #+#    #+#             */
/*   Updated: 2023/10/31 16:09:52 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	tmp_dest = (unsigned char)dest;
	tmp_src = (unsigned char)src;
	if (src < dest)
	{
		while (n--)
			tmp_dest[n] = tmp_src[n];
	}
	else
	{
		while (n--)
			*tmp_dest++ = *tmp_src++;
	}
	return (dest);
}