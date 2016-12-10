/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:18:33 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:18:34 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Lexicographical comparison between s1 and s2 up to n char- acters or until a
** ’\0’ is reached. If the 2 strings are identical, the function returns 1,
** or 0 otherwise.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!n)
		return (1);
	if (s1 && s2)
	{
		while ((*s1 && (*s1 == *s2)) && --n)
		{
			s1 += 1;
			s2 += 1;
		}
		if (!(*s1 - *s2))
			return (1);
	}
	return (0);
}
