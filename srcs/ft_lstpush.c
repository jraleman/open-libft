/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 01:06:29 by jaleman           #+#    #+#             */
/*   Updated: 2017/07/27 01:06:31 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Push an element to a list.
*/

t_list		*ft_lstpush(t_list *first, void *item)
{
	t_list	*tmp;

	if (!item)
		return (NULL);
	if (!first)
	{
		first = (t_list *)malloc(sizeof(t_list));
		first->content = item;
		first->next = NULL;
	}
	else
	{
		tmp = first;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = (t_list *)malloc(sizeof(t_list));
		tmp->next->content = item;
		tmp->next->next = NULL;
	}
	return (first);
}
