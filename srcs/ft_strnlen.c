/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 05:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/06/20 05:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the number of characters in the string pointed to by s,
** excluding the terminating null byte ('\0'), but at most maxlen.
** In doing this, ft_strnlen() looks only at the first maxlen characters
** in the string pointed to by s and never beyond s+maxlen.
*/

size_t	ft_strnlen(const char *src, size_t maxlen)
{
	size_t len;

	len = 0;
	while (*src && maxlen > 0)
	{
		src += 1;
		len += 1;
		maxlen -= 1;
	}
	return (len);
}
