/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_angle_to_degrees.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 19:48:05 by jaleman           #+#    #+#             */
/*   Updated: 2017/05/27 19:48:07 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts an angle to a degree.
** If the angle is over 360, start from the beginning.
*/

int		ft_degrees_to_angle(int angle)
{
	return (FT_ABS(angle % 360));
}
