/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf_nbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 22:09:32 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/18 22:09:33 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts the number to base ten (10) (decimal), using the get_nbr_unsigned
** function.
*/

static char	*conv_dec(uintmax_t nbr, int *nbr_digits)
{
	return (get_nbr_unsigned(nbr, nbr_digits, 10));
}

/*
** Gets the value of a signed number, and format it respectively. Returns the
** length (number of digits) of such number (depending on which type of length)
** is given.
*/

static int	signed_nbr(va_list ap, t_prntf *attr, int fd)
{
	int		len;

	len = 0;
	if (attr->flags & J || attr->flags & Z)
		len = format_signed(va_arg(ap, intmax_t), attr, fd);
	else if (attr->flags & LL)
		len = format_signed(va_arg(ap, long long), attr, fd);
	else if (attr->flags & L || attr->flags & UPP_D_BIT)
		len = format_signed(va_arg(ap, long), attr, fd);
	else if (attr->flags & HH)
		len = format_signed((char)va_arg(ap, int), attr, fd);
	else if (attr->flags & H)
		len = format_signed((short)va_arg(ap, int), attr, fd);
	else
		len = format_signed(va_arg(ap, int), attr, fd);
	return (len);
}

/*
** Gets the value of an unsigned number, and format it respectively. Returns the
** length (number of digits) of such number (depending on which type of length)
** is given.
*/

static int	unsigned_nbr(va_list ap, t_prntf *attr, int fd)
{
	int		len;

	len = 0;
	if (attr->flags & J)
		len = format_unsigned(va_arg(ap, uintmax_t), attr, fd, &conv_dec);
	else if (attr->flags & Z)
		len = format_unsigned(va_arg(ap, size_t), attr, fd, &conv_dec);
	else if (attr->flags & LL)
		len = format_unsigned(va_arg(ap, unsigned long long), attr, fd, \
			&conv_dec);
	else if (attr->flags & L || attr->flags & UPP_U_BIT)
		len = format_unsigned(va_arg(ap, unsigned long), attr, fd, &conv_dec);
	else if (attr->flags & HH)
		len = format_unsigned((unsigned char)va_arg(ap, unsigned int), attr, \
			fd, &conv_dec);
	else if (attr->flags & H)
		len = format_unsigned((unsigned short)va_arg(ap, unsigned int), attr, \
			fd, &conv_dec);
	else
		len = format_unsigned(va_arg(ap, unsigned int), attr, fd, &conv_dec);
	return (len);
}

/*
** Returns the length of the decimal number to be printed, depending in the
** length gotten with the flags (from the signed_nbr or unsigned_nbr functions).
*/

int			print_decimal(va_list ap, t_prntf *attr, int fd)
{
	int		len;
	int		flags;

	len = 0;
	flags = attr->flags;
	if (flags & LOW_D_BIT || flags & LOW_I_BIT || flags & UPP_D_BIT)
		len = signed_nbr(ap, attr, fd);
	if (flags & LOW_U_BIT || flags & UPP_U_BIT)
		len = unsigned_nbr(ap, attr, fd);
	return (len);
}
