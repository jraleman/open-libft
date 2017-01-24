/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy the content of an int array to another one.
*/

int		*ft_arr_cpy(const int *arr, size_t size)
{
	int				*cpy;
	unsigned int	i;

	cpy = ft_arr_new(size);
	i = 0;
	while (i < size)
	{
		cpy[i] = arr[i];
		i += 1;
	}
	return (cpy);
}
