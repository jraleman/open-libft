/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:26:13 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:26:14 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Raise the "inexact" floating-point exception for non-integer
** numeric arguments.
*/

double		ft_round(double x)
{
	return ((int)(x + 0.5));
}
