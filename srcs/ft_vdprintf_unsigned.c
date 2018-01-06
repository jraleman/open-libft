/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 22:09:40 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/18 22:09:41 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Used for not decimal values (octal, hexadecimal, and pointer address).
** Returns one (1) for octal, returns two (2) for hexadecimal and address.
*/

static int	not_decimal(uintmax_t nbr, int attr, int prec)
{
	if ((attr & LOW_O_BIT || attr & UPP_O_BIT) && attr & HASH \
			&& (nbr || (!nbr && attr & PRECISION && !prec)))
		return (1);
	else if (((attr & LOW_X_BIT || attr & UPP_X_BIT) && attr & HASH && nbr) \
				|| attr & LOW_P_BIT)
		return (2);
	return (0);
}

/*
** Gets the number of zeroes (0) from the flags and the precision values.
*/

int			get_nbr_zeroes(t_prntf *attr, int *len, int sign)
{
	int		nbr_zeros;

	nbr_zeros = 0;
	if (attr->flags & PRECISION && attr->precision > *len - sign)
	{
		nbr_zeros += attr->precision - *len + sign;
		*len += nbr_zeros;
	}
	if (attr->flags & WIDTH && attr->flags & ZERO && !(attr->flags & MINUS) \
		&& !(attr->flags & PRECISION) && attr->width > *len)
	{
		nbr_zeros += attr->width - *len;
		*len += nbr_zeros;
	}
	return (nbr_zeros);
}

/*
** Gets the number of spaces from the flags and the precision values.
*/

int			get_nbr_spaces(int attr, int min_width, int *len)
{
	int		nbr_spaces;

	nbr_spaces = 0;
	if (attr & WIDTH && (!(attr & ZERO) || attr & MINUS || attr & PRECISION) \
		&& min_width > *len)
	{
		nbr_spaces += min_width - *len;
		*len += nbr_spaces;
	}
	return (nbr_spaces);
}

/*
** Converts an integer value to a null-terminated string using the specified
** base and number of digits, and stores the result in the *result variable.
*/

char		*get_nbr_unsigned(uintmax_t nbr, int *nbr_digits, int base)
{
	int			len;
	char		*result;
	uintmax_t	reminder;

	len = 0;
	reminder = nbr;
	*nbr_digits = (!nbr) ? 1 : 0;
	while (reminder)
	{
		reminder /= base;
		*nbr_digits += 1;
	}
	if (!(result = (char *)malloc(sizeof(char) * (*nbr_digits))))
		return (NULL);
	*result = '0';
	len = (!nbr) ? 1 : 0;
	while (nbr)
	{
		reminder = nbr % base;
		nbr /= base;
		result[len++] = reminder + '0';
	}
	result[len] = '\0';
	result = ft_strrev(result);
	return (result);
}

/*
** Format an usigned number, getting the number of digits, the number of
** zeros (0) and spaces, and the precision given from the format value.
** This is the ugliest function I've ever written in my entire life. :(
** God bless you trying to understand this shit.
*/

int			format_unsigned(uintmax_t nbr, t_prntf *attr, int fd, \
							char *(*convert)(uintmax_t, int *))
{
	int		len;
	int		sign;
	int		nbr_zeros;
	int		nbr_spaces;
	char	*nbr_converted;

	nbr_converted = convert(nbr, &len);
	sign = not_decimal(nbr, attr->flags, attr->precision);
	if (attr->flags & LOW_X_BIT || attr->flags & LOW_P_BIT)
		ft_str_to_lowcase(nbr_converted);
	(attr->flags & PRECISION && !attr->precision && !nbr) ? len = 0 : len;
	len += sign;
	nbr_zeros = get_nbr_zeroes(attr, &len, (sign == 2) ? 2 : 0);
	nbr_spaces = get_nbr_spaces(attr->flags, attr->width, &len);
	!(attr->flags & MINUS) ? ft_putnchar_fd(' ', nbr_spaces, fd) : 0;
	not_decimal(nbr, attr->flags, attr->precision) ? ft_putchar_fd('0', fd) : 0;
	if (not_decimal(nbr, attr->flags, attr->precision) > 1)
		attr->flags & UPP_X_BIT ? \
		ft_putchar_fd('X', fd) : ft_putchar_fd('x', fd);
	ft_putnchar_fd('0', nbr_zeros, fd);
	if (!(attr->flags & PRECISION && !attr->precision && !nbr))
		ft_putstr_fd(nbr_converted, fd);
	free(nbr_converted);
	(attr->flags & MINUS) ? ft_putnchar_fd(' ', nbr_spaces, fd) : 0;
	return (len);
}
