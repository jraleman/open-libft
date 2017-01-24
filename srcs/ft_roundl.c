/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roundl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:26:59 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:27:01 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Need not raise the "inexact" floating-point exception for non-integer
** arguments that round to within the range of the return type.
*/

long double		ft_roundl(long double x)
{
	return ((long int)(x + 0.5));
}
