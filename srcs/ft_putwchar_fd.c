/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 15:48:06 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/17 15:48:07 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes the character corresponding to the wide-character code wc to the
** file descriptor.
*/

void	ft_putwchar_fd(wchar_t wc, int fd)
{
	if (wc < FT_BIT(7))
		ft_putchar_fd(wc, fd);
	else if (wc < FT_BIT(11))
	{
		ft_putchar_fd((wc >> 6) + 0xC0, fd);
		ft_putchar_fd((wc & 0x3F) + 0x80, fd);
	}
	else if (wc < FT_BIT(16))
	{
		ft_putchar_fd((wc >> 12) + 0xE0, fd);
		ft_putchar_fd(((wc >> 6) & 0x3F) + 0x80, fd);
		ft_putchar_fd((wc & 0x3F) + 0x80, fd);
	}
	else if (wc < FT_BIT(16) + FT_BIT(20))
	{
		ft_putchar_fd((wc >> 18) + 0xF0, fd);
		ft_putchar_fd(((wc >> 12) & 0x3F) + 0x80, fd);
		ft_putchar_fd(((wc >> 6) & 0x3F) + 0x80, fd);
		ft_putchar_fd((wc & 0x3F) + 0x80, fd);
	}
}
