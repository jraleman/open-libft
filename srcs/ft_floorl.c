/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floorl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:26:54 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:26:55 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the largest integral value less than or equal to x
*/

long double		ft_floorl(long double x)
{
	if (x > 0)
		return ((long int)x);
	return (((long int)x) - 1);
}
