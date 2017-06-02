/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:15:41 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 21:15:42 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts the numbers found in a string (using the variable c as a separator).
*/

size_t		ft_nbrcount(const char *s, char c)
{
	unsigned int	i;
	size_t			nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] != c)
			nbr += 1;
		while (s[i] != c && ft_isdigit(s[i]) && s[i + 1])
			i += 1;
		i += 1;
	}
	return (nbr);
}
