/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 00:12:12 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/04 00:12:13 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of c (converted to an unsigned char)
** in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
	{
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned const char *)s)[i]);
		i += 1;
	}
	return (NULL);
}
