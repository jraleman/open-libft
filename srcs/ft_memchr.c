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

#include "./includes/libft.h"

/*
** Locates the first occurrence of c (converted to an unsigned char)
** in string s.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*us;
	unsigned char		uc;

	i = 0;
	us = (unsigned const char *)s;
	uc = (unsigned char)c;
	while (i < n)
	{
		if (us[i] == uc)
			return ((void *)&us[i]);
		i += 1;
	}
	return (NULL);
}
