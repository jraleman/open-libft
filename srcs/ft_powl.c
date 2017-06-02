/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:27:21 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:27:22 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns in long, +-infinity and raises the "divide-by-zero" floating-point
** exception for y an odd integer < 0.
*/

long double		ft_powl(long double x, long int y)
{
	long double z;

	z = 1.0;
	while (y > 0)
	{
		while (!(y & 1))
		{
			y >>= 2;
			x *= x;
		}
		y -= 1;
		z *= x;
	}
	return (z);
}
