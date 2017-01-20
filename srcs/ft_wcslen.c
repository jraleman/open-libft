/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:19:17 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/19 15:19:17 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compute the number of wide-character codes in the wide-character string to
** which ws points, not including the terminating null wide-character code.
*/

size_t	ft_wcslen(const wchar_t *ws)
{
	size_t		i;

	i = 0;
	while (*ws)
	{
		i += 1 * sizeof(*ws);
		ws++;
	}
	return (i);
}
