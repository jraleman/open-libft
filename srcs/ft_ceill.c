/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:26:47 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:26:49 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns in long, the smallest integral value greater than or equal to x.
*/

long double		ft_ceill(long double x)
{
	if (x < 0)
		return ((long int)x);
	return (((long int)x) + 1);
}
