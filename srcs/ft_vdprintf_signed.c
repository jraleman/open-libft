/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf_signed.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 22:09:45 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/18 22:09:46 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Gets the number of digits of nbr. If nbr is zero, returns a one (1).
** If it's positive, returns how many digits the number has. If it's negative,
** returns the number of digits, plus an extra one for the negative sign (-).
*/

static int	nbr_digits(intmax_t nbr)
{
	int		len;

	if (!nbr)
		return (1);
	len = nbr < 0 ? 1 : 0;
	while (nbr)
	{
		nbr /= 10;
		len += 1;
	}
	return (len);
}

/*
** Prints the sign given of the number. If it's negative, it will always print
** the negative sign (-), else, and only if there is a flag with space or plus,
** the space or the plus sign (+) will be printed.
*/

static void	put_sign(intmax_t nbr, int attr, int fd)
{
	char	sign;

	sign = 0;
	if (nbr < 0)
		sign = '-';
	else if (nbr >= 0)
	{
		if (attr & PLUS)
			sign = '+';
		else if (attr & SPACE)
			sign = ' ';
	}
	if (sign)
		ft_putchar_fd(sign, fd);
}

/*
** Format a signed number, getting the number of digits, the number of zeroes
** and spaces, and the precision given from the format value.
** This is the second ugliest function I've ever written in my entire life. :(
** God bless you trying to understand this shit.
*/

int			format_signed(intmax_t nbr, t_prntf *attr, int fd)
{
	int		len;
	int		sign;
	int		nbr_zeros;
	int		nbr_spaces;

	len = 0;
	sign = (nbr >= 0 && (attr->flags & PLUS || attr->flags & SPACE)) ? 1 : 0;
	if (!(attr->flags & PRECISION) || attr->precision || nbr)
		len = nbr_digits(nbr);
	len += sign;
	nbr_zeros = get_nbr_zeroes(attr, &len, (nbr < 0 || sign));
	nbr_spaces = get_nbr_spaces(attr->flags, attr->width, &len);
	!(attr->flags & MINUS) ? ft_putnchar_fd(' ', nbr_spaces, fd) : 0;
	put_sign(nbr, attr->flags, fd);
	ft_putnchar_fd('0', nbr_zeros, fd);
	if (!(attr->flags & PRECISION && !attr->precision && !nbr))
		ft_putunbr_fd((nbr < 0) ? (-nbr) : (nbr), fd);
	(attr->flags & MINUS) ? ft_putnchar_fd(' ', nbr_spaces, fd) : 0;
	return (len);
}
