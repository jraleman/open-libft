/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 07:50:32 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/19 07:50:33 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes the character corresponding to the wide-character code wc to the
** standard output.
*/

int			ft_putwchar(wchar_t wc)
{
	return (ft_putwchar_fd(wc, STDOUT_FILENO));
}
