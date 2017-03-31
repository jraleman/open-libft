/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stck_pop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:15:16 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/30 15:15:17 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The main reason for keeping the top of the stack static is to make it easy
** to maintainthe new top of the stack and also to return the top data value
** that is popped or removed from the stack.
*/

double	ft_stck_pop(t_stack *top)
{
	double	value;
	t_stack	*tmp;

	if (top)
	{
		tmp = top->next;
		if (tmp != NULL)
		{
			value = tmp->value;
			top->next = tmp->next;
			free(tmp);
			return (value);
		}
	}
	return (top->value);
}
