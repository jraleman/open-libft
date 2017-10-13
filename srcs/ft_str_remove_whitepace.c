/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_remove_whitespace.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 12:37:58 by jaleman           #+#    #+#             */
/*   Updated: 2016/12/02 12:38:01 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Create a new string, and remove all the whitespace from the string.
** For instance: "  a b c   d  " -> "abcd".
*/

char	*ft_str_remove_whitespace(char *str)
{
	int	i;
	int	j;
	char	*new_str;

	i = 0;
	j = 0;
	if (!(new_str = (char *)malloc(sizeof(char) * ft_strlen(str))))
		return (NULL);
	while (str[i])
	{
		if (str[i] != ft_iswspace(str[i]))
			new_str[j++] = str[i];
		i += 1;
	}
	new_str[++j] = '\0';
	return (new_str);
}
