/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almounib <almounib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:55:33 by almounib          #+#    #+#             */
/*   Updated: 2023/10/31 00:18:49 by almounib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned char	*str;

	str = (unsigned char)s;
	while (n)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return (s);
}
