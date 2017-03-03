/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_little_endian.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 18:10:50 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/02 18:17:34 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the character is a math operator.
*/

int		ft_is_little_endian(void)
{
	int little;

	little = 1;
	if (*(char *)&little == 1)
		return (1);
	else
		return (0);
}
