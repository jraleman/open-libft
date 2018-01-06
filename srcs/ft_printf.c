/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 19:06:07 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/27 19:06:08 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes the string pointed by format to the standard output (stdout),
** replacing any format specifier in the same way as printf does, but using the
** elements in the variable argument list identified by args instead of
** additional function arguments.
*/

int			ft_printf(const char *format, ...)
{
	int		ret;
	va_list	args;

	va_start(args, format);
	ret = ft_vdprintf(STDOUT_FILENO, format, args);
	va_end(args);
	return (ret);
}
