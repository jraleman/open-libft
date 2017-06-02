/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_count_repeated.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return total count of repeated elements in an integer array.
*/

size_t		ft_array_count_repeated(int *arr, size_t size)
{
	size_t			count;
	unsigned int	i;
	unsigned int	j;

	count = 0;
	if (size > 1)
	{
		i = 0;
		while (i < size)
		{
			j = i;
			while (j < size)
			{
				if (arr[i] == arr[j])
					count += 1;
				j += 1;
			}
			i += 1;
		}
	}
	return (count);
}
