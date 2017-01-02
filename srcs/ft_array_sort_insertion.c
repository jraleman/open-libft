/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_sort_insertion.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sort the elements of an int array, by sort insertion.
*/

int		*ft_array_sort_insertion(const int *arr, size_t n)
{
	int		*sort_arr;
	int		current;
	size_t	i;
	int		j;

	sort_arr = ft_array_copy(arr, n);
	i = 0;
	j = 0;
	while (i < n)
	{
		current = sort_arr[i];
		j = i - 1;
		while (j >= 0 && (sort_arr[j] > current))
		{
			sort_arr[j + 1] = sort_arr[j];
			j -= 1;
		}
		sort_arr[j + 1] = current;
		i += 1;
	}
	return (sort_arr);
}
