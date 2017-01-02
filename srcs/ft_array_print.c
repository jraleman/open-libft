/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints the content of an int array. With *encl, one can select how the
** numbers will be enclosed. If the number of characters isn't equal to two (2),
** then curly braces {} will be used as default.
*/

void	ft_array_print(int *arr, size_t n, char *encl)
{
	size_t	i;

	i = 0;
	if (ft_strlen(encl) != 2)
		encl = "{}";
	while (i < (n - 1))
	{
		write(1, &encl[0], 1);
		ft_putnbr(arr[i++]);
		write(1, &encl[1], 1);
		write(1, ", ", 2);
	}
	write(1, &encl[0], 1);
	ft_putnbr(arr[i]);
	write(1, &encl[1], 1);
	write(1, "\n", 1);
}
