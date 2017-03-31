/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stck_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:15:09 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/30 15:15:11 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Stack function builds the dynamic stack below top, which
** must already exist as a node and is static.
*/

void	ft_stck_push(t_stack *top, double newdata)
{
	t_stack	*new;

	if (top)
	{
		if (!(new = (t_stack *)malloc(sizeof(t_stack))))
			return ;
		new->next = top->next;
		new->value = newdata;
		top->next = new;
	}
}
