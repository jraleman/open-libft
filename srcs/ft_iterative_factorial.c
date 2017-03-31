/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 11:53:24 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/13 11:53:25 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the result of a factorial operation based on the number
** given as a parameter.
*/

size_t		ft_factorial(unsigned int nb)
{
	unsigned int	factorial;
	unsigned int	i;

	if (!nb)
		return (1);
	factorial = 1;
	i = 0;
	while (i++ < nb)
		factorial *= i;
	return (factorial);
}
