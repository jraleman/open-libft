/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_del_pop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Remove an element specified with the pos variable (index) from an int array.
*/

int		*ft_arr_elem_pop(int *arr, size_t size, unsigned int pos)
{
	if (pos >= size)
		return (arr);
	while (pos++ < size)
		arr[pos - 1] = arr[pos];
	return (arr);
}
