/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 05:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/06/20 05:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to a new string which is a duplicate of the string s.
** Copies at most n bytes. If s is longer than n, only n bytes are copied,
** and a terminating null byte ('\0') is added.
** Memory for the new string is obtained with malloc(3),
** and can be freed with free(3).
*/

char	*ft_strndup(const char *str, size_t n)
{
	char	*dup;
	int		len;
	int		i;

	len = (ft_strlen(str) < n) ? ft_strlen(str) : n;
	if (!(dup = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i += 1;
	}
	dup[i] = '\0';
	return (dup);
	/*
	char	*tmp;

	//if (!(tmp = (char *)malloc(sizeof(char)) * n + 1))
	//	return (NULL);
	ft_strncpy(tmp, s, n);
	return (tmp);
*/
}
