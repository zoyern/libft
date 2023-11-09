/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoyern <zoyern@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:28:22 by zoyern            #+#    #+#             */
/*   Updated: 2023/11/09 16:35:58 by zoyern           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*t;

	if (!*lst)
		*lst = new;
	else
	{
		t = *lst;
		while (t->next)
			t = t->next;
		t->next = new;
	}
}
