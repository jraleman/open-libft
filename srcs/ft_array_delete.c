/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 20:06:26 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/01 20:06:27 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes an integer array.
*/

void	ft_array_delete(int *arr)
{
	if (arr)
	{
		free(arr);
		*arr = 0;
	}
}
