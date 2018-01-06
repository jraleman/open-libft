/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf_oct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 04:34:39 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/19 04:34:40 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts the number to base eight (8) (octal), using the get_nbr_unsigned
** function.
*/

static char	*convert_octal(uintmax_t nbr, int *nbdig)
{
	return (get_nbr_unsigned(nbr, nbdig, 8));
}

/*
** Returns the length of the octal number to be printed, depending in the
** length gotten with the flags.
*/

int			print_octal(va_list ap, t_prntf *attr, int fd)
{
	int		len;

	if (attr->flags & J)
		len = format_unsigned(va_arg(ap, uintmax_t), attr, fd, &convert_octal);
	else if (attr->flags & Z)
		len = format_unsigned(va_arg(ap, size_t), attr, fd, &convert_octal);
	else if (attr->flags & LL)
		len = format_unsigned(va_arg(ap, unsigned long long), attr, fd, \
			&convert_octal);
	else if (attr->flags & L || attr->flags & UPP_O_BIT)
		len = format_unsigned(va_arg(ap, unsigned long), attr, fd, \
			&convert_octal);
	else if (attr->flags & H)
		len = format_unsigned((unsigned short)va_arg(ap, unsigned int), attr, \
			fd, &convert_octal);
	else if (attr->flags & HH)
		len = format_unsigned((unsigned char)va_arg(ap, unsigned int), attr, \
			fd, &convert_octal);
	else
		len = format_unsigned(va_arg(ap, unsigned int), attr, fd, \
			&convert_octal);
	return (len);
}
