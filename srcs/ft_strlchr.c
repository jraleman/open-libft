/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 01:06:08 by jaleman           #+#    #+#             */
/*   Updated: 2017/07/27 01:06:09 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the total length of the number of character iterated from str,
** to find character c.
*/

size_t		ft_strlchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != (char)c)
		i += 1;
	return (str[i] != (char)c ? -1 : i);
}
