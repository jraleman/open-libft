/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 06:39:10 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/19 06:39:11 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function that reverses (in-place) a string.
*/

char		*ft_strrev(const char *str)
{
	char	*end;
	char	*tmp;
	int		len;

	if (str)
	{
		tmp = str;
		len = ft_strlen(str);
		end = str + len - 1;
		while (tmp < end)
			ft_swap(tmp += 1, end--);
	}
	return (str);
}
