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
** Prints the content of an integer array.
** With *encl, one can select how the numbers will be enclosed.
** If the number of characters isn't equal to two (2),
** then curly braces {} will be used as default.
*/

void	ft_array_print(int *arr, size_t size, char *encl)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return ;
	if (ft_strlen(encl) != 2)
		encl = "{}";
	while (i < (size - 1))
	{
		ft_putchar(encl[0]);
		ft_putnbr(arr[i]);
		ft_putchar(encl[1]);
		ft_putstr(", ");
		i += 1;
	}
	ft_putchar(encl[0]);
	ft_putnbr(arr[i]);
	ft_putchar(encl[1]);
	ft_putstr("\n");
}
