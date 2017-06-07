/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wclen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 07:37:18 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/19 07:37:19 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Computes the length of the wide character wc.
*/

int		ft_wclen(wchar_t wc)
{
	int		len;

	len = 0;
	if (wc < 0x80)
		len = 1;
	else if (wc < 0x0800)
		len = 2;
	else if (wc < 0x010000)
		len = 3;
	else if (wc < 0x110000)
		len = 4;
	return (len);
}
