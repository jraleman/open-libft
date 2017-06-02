/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_do_op.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Will apply a math operation to all the elements of an int array.
** For example, if op == '*', all the elements will be multiplied by whatever
** number was assigned to the val variable.
** arr_op[0] = (2 * 2); -> arr_op[0] = 4;
** arr_op[1] = (6 * 2); -> arr_op[1] = 12;
** arr_op[2] = (8 * 2); -> arr_op[2] = 16;
*/

int		*ft_array_do_op(int *arr, size_t size, char op, int val)
{
	unsigned int	i;

	if (ft_ismathop(op))
	{
		i = 0;
		while (i < size)
		{
			arr[i] = ft_do_op(arr[i], val, op);
			i += 1;
		}
	}
	return (arr);
}
