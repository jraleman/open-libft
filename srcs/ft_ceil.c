/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceil.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:25:56 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:25:57 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the smallest integral value greater than or equal to x.
*/

double		ft_ceil(double x)
{
	if (x < 0)
		return ((int)x);
	return (((int)x) + 1);
}
