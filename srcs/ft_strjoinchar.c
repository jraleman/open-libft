/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 05:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/06/20 05:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Join character c at the end of string s.
*/

char	*ft_strjoinch(char const *s, char c)
{
	char	*new_str;
	size_t	i;
	size_t	len;

	if (!s || !c)
		return (NULL);
	len = ft_strlen(s);
	if (!(new_str = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
  {
    *(new_str + i) = *(s + i);
    i += 1;
  }
	*(new_str + i) = c;
	return (new_str);
}
