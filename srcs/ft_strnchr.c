/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 05:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/06/20 05:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the first occurrence of the character c
** in the string s, up to the offset defined.
*/

char	*ft_strnchr(char *s, char c, int offset)
{
	int		i;

	i = 0;
	while (s[++i])
  {
    if (s[i] == c)
      return (s + i + offset);
    i += 1;
  }
	return (NULL);
}
