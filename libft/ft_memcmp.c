/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:29:18 by zoyern            #+#    #+#             */
/*   Updated: 2023/10/31 17:51:36 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	
	if (n == 0)
		return (0);
	while(n--)
	{
		if (*tmp_s1 != *tmp_s2)
			return (*tmp_s1 - *tmp_s2);
	}
	return (*tmp_s1 - *tmp_s2);
}
