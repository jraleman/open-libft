/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:26:06 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:26:06 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the largest integral value less than or equal to x
*/

double		ft_floor(double x)
{
	if (x > 0)
		return ((int)x);
	return (((int)x) - 1);
}
