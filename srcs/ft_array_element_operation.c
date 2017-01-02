/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_element_operation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Will aplay a math operation to all the elements of an int array.
** For example, if op == '*', all the elements will be multiplied by whatever
** number was assigned to the val variable.
** aarop[0] = (2 * 2); -> aarop[0] = 4;
** aarop[1] = (6 * 2); -> aarop[1] = 12;
** aarop[2] = (8 * 2); -> aarop[2] = 16;
*/

int		*ft_array_element_operation(const int *arr, size_t n, char op, int val)
{
	int		*arrop;
	size_t	i;

	if (!(ft_ismathop(op)))
		return ((int *)arr);
	arrop = ft_array_new(n);
	i = 0;
	while (i < n)
	{
		arrop[i] = ft_do_op(arr[i], val, op);
		i += 1;
	}
	return (arrop);
}
