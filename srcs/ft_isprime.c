/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 14:28:58 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 14:28:59 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the number is a prime number.
*/

int		ft_isprime(long unsigned int nbr)
{
	unsigned long int	i;

	if (nbr == 0)
		return (0);
	i = 1;
	while (++i <= nbr)
	{
		if (!(nbr % i))
			break ;
	}
	return (i == nbr ? 1 : 0);
}
