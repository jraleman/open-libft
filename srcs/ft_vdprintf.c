/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 00:44:08 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/08 00:44:09 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If no specifier is found, prints the character, plus the specific
** justification given the minus flag: (left or right).
*/

static int	print_no_specifier(char c, t_prntf *attr, int fd)
{
	int		len;

	if (!(attr->flags & MINUS))
		len = print_spaces(attr->width, sizeof(char), attr->flags, fd);
	ft_putchar_fd(c, fd);
	if (attr->flags & MINUS)
		len = print_spaces(attr->width, sizeof(char), attr->flags, fd);
	return (len);
}

/*
** Prints the specific specifier given from the format.
*/

static int	print_specifier(char format, va_list arg, t_prntf *attr, int fd)
{
	int		print;

	if (attr->specifier == LOWER_S)
		print = print_string(arg, attr, fd);
	else if (attr->specifier == UPPER_S)
		print = print_wide_string(arg, attr, fd);
	else if ((attr->specifier == LOWER_D || attr->specifier == UPPER_D \
			|| attr->specifier == LOWER_I) || (attr->specifier == LOWER_U \
			|| attr->specifier == UPPER_U))
		print = print_decimal(arg, attr, fd);
	else if (attr->specifier == LOWER_O || attr->specifier == UPPER_O)
		print = print_octal(arg, attr, fd);
	else if (attr->specifier == LOWER_P || attr->specifier == LOWER_X \
			|| attr->specifier == UPPER_X)
		print = print_hexadecimal(arg, attr, fd);
	else if (attr->specifier == LOWER_C)
		print = print_character(arg, attr, fd);
	else if (attr->specifier == UPPER_C)
		print = print_wide_character(arg, attr, fd);
	else if (attr->specifier == LOWER_B)
		print = print_binary(arg, attr, fd);
	else
		print = print_no_specifier(format, attr, fd);
	return (print);
}

/*
** If successful, the total number of characters written is returned.
** On failure, a negative number is returned (defined by PRINTF_FAILURE macro).
*/

static int	print_fd(const char *format[], va_list arg, int fd)
{
	t_prntf	attribute;

	attribute.flags = 0;
	attribute.width = 0;
	attribute.precision = 0;
	attribute.specifier = parse_specifier(arg, (char **)format, &attribute);
	if (!**format)
		return (PRINTF_FAILURE);
	return (print_specifier((char)**format, arg, &attribute, fd));
}

/*
** Writes the string pointed by format to a file descriptor (fd),
** replacing any format specifier in the same way as printf does, but using the
** elements in the variable argument list identified by arg instead of
** additional function arguments.
*/

int			ft_vdprintf(int fd, const char *format, va_list arg)
{
	int		len;
	int		count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format += 1;
			if ((len = print_fd(&format, arg, fd)) == PRINTF_FAILURE)
				break ;
			count += len;
		}
		else
		{
			ft_putchar_fd(*format, fd);
			count += 1;
		}
		format += 1;
	}
	return (count);
}
