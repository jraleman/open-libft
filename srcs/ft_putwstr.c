/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 07:52:18 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/19 07:52:19 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function begins printing from the address specified (wcs) until it
** reaches the terminating null wide character.
** This terminating null wide character is not printed to the standard output.
*/

int		ft_putwstr(wchar_t *wcs)
{
	return (ft_putwstr_fd(wcs, STDOUT_FILENO));
}
