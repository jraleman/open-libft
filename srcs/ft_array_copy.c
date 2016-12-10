/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Copy the content of an int array to another one.
*/

int		*ft_array_copy(const int *arr, size_t n)
{
	int		*cpy;
	size_t	i;

	cpy = ft_array_new(n);
	i = 0;
	while (i < n)
	{
		cpy[i] = arr[i];
		i += 1;
	}
	return (cpy);
}
