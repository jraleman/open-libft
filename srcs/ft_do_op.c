/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Will do a math operation (depending on the value of the variable op) to the
** first number (nbr1) and the second number (nbr2), in that order. If the
** op value isn't a math operator, or if there is a division by zero (0), it
** will return a one.
*/

int		ft_do_op(int nbr1, int nbr2, char op)
{
	int	result;

	result = 0;
	if (op == '+')
		result = nbr1 + nbr2;
	else if (op == '-')
		result = nbr1 - nbr2;
	else if (op == '*')
		result = nbr1 * nbr2;
	else if (op == '/')
		result = (nbr2 != 0) ? (nbr1 / nbr2) : result;
	else if (op == '%')
		result = (nbr2 != 0) ? (nbr1 % nbr2) : result;
	return (result);
}
