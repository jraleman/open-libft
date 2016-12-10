/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_element_repeated.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Will return the number of elements repeated in an int array.
*/

size_t		ft_array_element_repeated(int *arr, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	cnt;

	i = -1;
	cnt = 0;
	if (n < 1)
		return (0);
	while (++i < n)
	{
		j = i + 1;
		while (j < n)
			if (arr[i] == arr[j++])
				cnt += 1;
	}
	return (cnt);
}
