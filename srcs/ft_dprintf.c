/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 00:44:08 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/08 00:44:09 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes the string pointed by format to a file descriptor (fd),
** replacing any format specifier in the same way as printf does, but using the
** elements in the variable argument list identified by arg instead of
** additional function arguments.
*/

int			ft_dprintf(int fd, const char *format, ...)
{
	int		ret;
	va_list	args;

	va_start(args, format);
	ret = ft_vdprintf(fd, format, args);
	va_end(args);
	return (ret);
}
