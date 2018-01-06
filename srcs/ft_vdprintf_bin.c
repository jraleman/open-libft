/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf_bin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 04:34:33 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/19 04:34:34 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts the number to base two (2) (binary), using the get_nbr_unsigned
** function.
*/

static char	*convert_binary(uintmax_t nbr, int *nbr_digits)
{
	return (get_nbr_unsigned(nbr, nbr_digits, 2));
}

/*
** Returns the length of the binary number to be printed, depending in the
** length gotten with the flags.
*/

int			print_binary(va_list ap, t_prntf *attr, int fd)
{
	int		len;

	if (attr->flags & J)
		len = format_unsigned(va_arg(ap, uintmax_t), attr, fd, &convert_binary);
	else if (attr->flags & Z)
		len = format_unsigned(va_arg(ap, size_t), attr, fd, &convert_binary);
	else if (attr->flags & LL)
		len = format_unsigned(va_arg(ap, unsigned long long), attr, fd, \
			&convert_binary);
	else if (attr->flags & L || attr->flags & UPP_O_BIT)
		len = format_unsigned(va_arg(ap, unsigned long), attr, fd, \
			&convert_binary);
	else if (attr->flags & H)
		len = format_unsigned((unsigned short)va_arg(ap, unsigned int), attr, \
			fd, &convert_binary);
	else if (attr->flags & HH)
		len = format_unsigned((unsigned char)va_arg(ap, unsigned int), attr, \
			fd, &convert_binary);
	else
		len = format_unsigned(va_arg(ap, unsigned int), attr, \
			fd, &convert_binary);
	return (len);
}
