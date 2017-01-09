/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 05:13:49 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/03 05:19:03 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes an int, and converts it to a null-terminated string, with a specific
** numeric base (from binary to hexadecimal).
*/

char		*ft_itoa_base(int value, int base)
{
	long	nbr;
	int		len;
	char	*pointer;
	char	*base_string;

	if (value == 0 || base < 2 || base > 16)
		return (ft_strdup("0"));
	nbr = value;
	len = ft_nbrlen(nbr, base);
	base_string = "0123456789ABCDEF";
	nbr < 0 ? nbr *= -1 : 0;
	if (!(pointer = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	pointer[len] = '\0';
	while (nbr)
	{
		pointer[--len] = base_string[nbr % base];
		nbr /= base;
	}
	if ((value < 0) && (base == 10))
		pointer[0] = '-';
	return (pointer);
}
