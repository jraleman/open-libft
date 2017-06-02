/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hypot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:26:27 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:26:28 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Computes the sqrt(x*x+y*y) without undue overflow or underflow.
*/

double		ft_hypot(double x, double y)
{
	return (ft_sqrt((x * x) + (y * y)));
}
