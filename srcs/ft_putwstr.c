/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:19:24 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/19 15:19:25 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function begins printing from the address specified (ws) until it reaches
** the terminating null wide character.
** This terminating null wide character is not printed to the standard output.
*/

void	ft_putwstr(const wchar_t *ws)
{
	while (*ws)
		ft_putwchar(*ws++);
}
