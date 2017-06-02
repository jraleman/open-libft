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

#include "libft.h"

/*
** Copy the content of an int array to another one.
*/

int		*ft_array_copy(const int *src, int *dst, size_t n_src, size_t n_dst)
{
	unsigned int	i;

	i = 0;
	while (i < n_src && i < n_dst)
	{
		dst[i] = src[i];
		i += 1;
	}
	return (dst);
}
