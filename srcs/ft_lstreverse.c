/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 05:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/06/20 05:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Reverse a list.
*/

t_list		*ft_lstreverse(t_list *alst)
{
	t_list	*previous;
	t_list	*current;
	t_list	*next;

	previous = NULL;
	current = alst;
	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	alst = previous;
	return (alst);
}
