/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf_text.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 16:30:24 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/10 16:30:25 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints number of spaces.
*/

int		print_spaces(int width, int len, int attr, int fd)
{
	char	space;

	while ((width - len) > 0)
	{
		space = ((attr & ZERO) && !(attr & MINUS)) ? '0' : ' ';
		ft_putchar_fd(space, fd);
		len += 1;
	}
	return (len);
}

/*
** Prints string of wide characters.
*/

int		print_wide_string(va_list ap, t_prntf *attr, int fd)
{
	int		len;
	wchar_t	*str;
	wchar_t	*cpy;

	if (!(str = va_arg(ap, wchar_t *)))
		str = ft_wcsdup(L"(null)");
	if (attr->flags & PRECISION)
	{
		cpy = ft_wcsnew(attr->precision);
		if (str)
			cpy = ft_wcsncpy(cpy, str, attr->precision);
		str = cpy;
	}
	len = ft_wcslen(str);
	if (!(attr->flags & MINUS))
		len = print_spaces(attr->width, len, attr->flags, fd);
	ft_putwstr_fd(str, fd);
	if (attr->flags & MINUS)
		len = print_spaces(attr->width, len, attr->flags, fd);
	return (len);
}

/*
** Prints wide characters.
*/

int		print_wide_character(va_list ap, t_prntf *attr, int fd)
{
	int		len;
	wchar_t	c;

	c = va_arg(ap, wint_t);
	len = ft_wclen(c);
	if (!(attr->flags & MINUS))
		len = print_spaces(attr->width, len, attr->flags, fd);
	ft_putwchar_fd(c, fd);
	if (attr->flags & MINUS)
		len = print_spaces(attr->width, len, attr->flags, fd);
	return (len);
}

/*
** Prints string of characters.
*/

int		print_string(va_list ap, t_prntf *attr, int fd)
{
	int		len;
	char	*str;
	char	*cpy;

	if (attr->flags & L)
		return (print_wide_string(ap, attr, fd));
	if (!(str = va_arg(ap, char *)))
		str = ft_strdup("(null)");
	if (attr->flags & PRECISION)
	{
		if (!(cpy = (char *)malloc(sizeof(char) * attr->precision)))
			return (0);
		cpy = ft_strncpy(cpy, str, attr->precision);
		str = cpy;
	}
	len = ft_strlen(str);
	if (!(attr->flags & MINUS))
		len = print_spaces(attr->width, len, attr->flags, fd);
	ft_putstr_fd(str, fd);
	if (attr->flags & MINUS)
		len = print_spaces(attr->width, len, attr->flags, fd);
	return (len);
}

/*
** Prints characters.
*/

int		print_character(va_list ap, t_prntf *attr, int fd)
{
	int		len;
	char	c;

	if (attr->flags & L)
		return (print_wide_character(ap, attr, fd));
	c = va_arg(ap, int);
	len = sizeof(char);
	if (!(attr->flags & MINUS))
		len = print_spaces(attr->width, len, attr->flags, fd);
	ft_putchar_fd(c, fd);
	if (attr->flags & MINUS)
		len = print_spaces(attr->width, len, attr->flags, fd);
	return (len);
}
