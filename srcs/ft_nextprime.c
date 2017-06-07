/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextprime.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 14:40:30 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 14:40:30 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Gives the smallest prime large number after nbr.
*/

long unsigned int	ft_nextprime(long unsigned int nbr)
{
	nbr += 1;
	while (ft_isprime(nbr) == 0)
		nbr += 1;
	return (nbr);
}
