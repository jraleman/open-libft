/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hypotl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:27:14 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:27:14 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Computes in long, the sqrt(x*x+y*y) without undue overflow or underflow.
*/

long double		ft_hypotl(long double x, long double y)
{
	return (ft_sqrtl((x * x) + (y * y)));
}
