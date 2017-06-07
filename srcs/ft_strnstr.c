/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:55:30 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 20:55:31 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of the null-terminated string little in the
** string big, where not more than len characters are searched.
** Characters that appear after a `\0' character are not searched.
*/

char	*ft_strnstr(const char *big, const char *little, size_t ln)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (big[i] && (i < ln))
	{
		while ((big[i + j] == little[j]) && little[j] && ((i + j) < ln))
			j += 1;
		if (!little[j])
			return ((char *)&big[i]);
		j = 0;
		i += 1;
	}
	if (!little[0])
		return ((char *)&big[i]);
	return (NULL);
}
