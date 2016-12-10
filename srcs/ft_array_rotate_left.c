/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_rotate_left.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Rotate the elements to the left of an array, by how many position defined
** in the tms variable. If the tms variable is greater than the number of
** elements, it's going to be trimed down to the next min value.
** For example, we have an array with three (3) elements, and we say that we
** want to rotate it 5 times. tms will be trimed to 2 times (5 - 3 = 2), and
** then we rotate it 2 times only.
*/

int		*ft_array_rotate_left(int *arr, size_t n, unsigned int tms)
{
	int		last;
	size_t	i;

	if (!tms || !arr)
		return (arr);
	last = arr[0];
	i = 0;
	while (tms > n)
		tms -= n;
	while (i < (n - 1))
	{
		arr[i] = arr[i + 1];
		i += 1;
	}
	arr[n - 1] = last;
	tms -= 1;
	if (tms)
		ft_array_rotate_left(arr, n, tms);
	return (arr);
}
