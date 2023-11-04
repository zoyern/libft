/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:27:37 by almounib          #+#    #+#             */
/*   Updated: 2023/11/03 23:14:08 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned char	*t;

	t = dest;
	while (n--)
		*t++ = *(unsigned char *)src++;
	return (dest);
}
