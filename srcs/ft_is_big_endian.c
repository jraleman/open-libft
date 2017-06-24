/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_big_endian.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 18:10:50 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/02 18:17:34 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Retuns one (1) if the computer is big endian.
** Otherwise, returns zero (0).
*/

int		ft_is_big_endian(void)
{
	int	big;

	big = 1;
	return (*(char *)&big == 1 ? 0 : 1);
}
