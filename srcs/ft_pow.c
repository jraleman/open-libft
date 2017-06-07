/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 11:28:01 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/20 11:28:01 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns +-infinity and raises the "divide-by-zero" floating-point exception
** for y an odd integer < 0.
*/

double		ft_pow(double x, int y)
{
	double z;

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
