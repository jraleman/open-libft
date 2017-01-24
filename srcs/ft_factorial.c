/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 14:36:15 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 14:36:15 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Calculates the product of all the positive integers from 1 to a given number.
*/

long unsigned int	ft_factorial(int nbr)
{
	if (nbr >= 1)
		return (nbr * ft_factorial(nbr - 1));
	if (!nbr)
		return (1);
	return (0);
}
