/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:26:56 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/08 00:52:43 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_nbrlen(int n)
{
	unsigned long	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n <= 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned long	len;
	long int		nb;
	unsigned long	i;

	len = ft_nbrlen(n);
	nb = n;
	i = 0;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (nb < 0)
	{
		s[i++] = '-';
		nb *= -1;
	}
	s[len + 1] = '\0';
	while (len-- > i)
	{
		s[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}
