/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stck_show.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 15:15:28 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/30 15:15:30 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

/*
** Shows the current value of the stack.
** Builds the dynamic stack below top, which must already exist
** as a node and is static.
*/

void	ft_stck_show(t_stack *top)
{
	t_stack	*t;

	if (top)
	{
		t = top->next;
		while (t != NULL)
		{
			ft_printf("%lf\n", t->value);
			t = t->next;
		}
	}
}
