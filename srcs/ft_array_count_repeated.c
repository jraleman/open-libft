/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_repeated_count.c                          :+:      :+:    :+:   */
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

size_t		ft_array_repeated_count(int *arr, size_t size)
{
	int		i;
	int		j;
	size_t	count;

	i = -1;
	count = 0;
	if (size < 1)
	{
		while ((unsigned int)++i < size)
		{
			j = i + 1;
			while ((unsigned int)j < size)
				if (arr[i] == arr[j++])
					count += 1;
		}
	}
	return (count);
}
