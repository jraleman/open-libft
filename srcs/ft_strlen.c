/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:00:17 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/02 16:00:19 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Global variables for the masks.
*/

static const unsigned long g_mask01 = 0x0101010101010101;
static const unsigned long g_mask80 = 0x8080808080808080;

/*
** Test the byte of the pointer.
** If at least one bit is a null character, returns that position.
** If none is found, returns -1.
*/

static int	test_byte(const char *ptr)
{
	int	ret;

	ret = -1;
	if (ptr[0] == '\0')
		ret = 0;
	else if (ptr[1] == '\0')
		ret = 1;
	else if (ptr[2] == '\0')
		ret = 2;
	else if (ptr[3] == '\0')
		ret = 3;
	else if (ptr[4] == '\0')
		ret = 4;
	else if (ptr[5] == '\0')
		ret = 5;
	else if (ptr[6] == '\0')
		ret = 6;
	else if (ptr[7] == '\0')
		ret = 7;
	return (ret);
}

/*
** Computes the length of the string s.
*/

size_t		ft_strlen(const char *s)
{
	int					x;
	const char			*ptr;
	const unsigned long	*lptr;

	x = 0;
	ptr = s;
	while (((uintptr_t)ptr & sizeof(long)) - 1)
	{
		if (*ptr == '\0')
			return (ptr - s);
		ptr += 1;
	}
	lptr = (const unsigned long *)ptr;
	while (1)
	{
		if ((*lptr - g_mask01) & g_mask80)
		{
			ptr = (const char *)(lptr);
			if ((x = test_byte(ptr)) >= 0)
				break ;
		}
		lptr += 1;
	}
	return (ptr - s + x);
}
