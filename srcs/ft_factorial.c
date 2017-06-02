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

size_t		ft_factorial(unsigned int nbr)
{
	if (nbr >= 1)
		return (nbr * ft_factorial(nbr - 1));
	else
		return (nbr == 0 ? 1 : 0);
}
