/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:16:39 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/13 23:16:40 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the next prime number greater or equal to the number
** given as argument.
*/

size_t		ft_find_next_prime(unsigned int nb)
{
	nb += 1;
	while (!ft_isprime(nb))
		nb += 1;
	return (nb);
}
