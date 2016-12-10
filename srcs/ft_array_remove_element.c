/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_remove_element.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Remove an element specified with the pos variable (index) from an int array.
*/

int		*ft_array_remove_element(int *arr, size_t n, unsigned int pos)
{
	if (pos >= n)
		return (arr);
	while (pos++ < n)
		arr[pos - 1] = arr[pos];
	return (arr);
}
