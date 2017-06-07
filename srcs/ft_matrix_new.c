/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 01:13:04 by jaleman           #+#    #+#             */
/*   Updated: 2017/04/08 01:13:05 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Responsible for allocating a matrix (2 dimensional dynamic array).
*/

int			**ft_matrix_new(int row, int col)
{
	int		i;
	int		**matrix;

	i = 0;
	if (!(matrix = (int **)ft_calloc(sizeof(int *) * row, 0)))
		return (0);
	while (i < row)
	{
		if (!(matrix[i] = (int *)ft_calloc(sizeof(int) * col, 0)))
			return (0);
		i += 1;
	}
	return (matrix);
}
