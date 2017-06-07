/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_capitalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 21:35:21 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/16 21:35:22 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Capitalized each word (separated by a space), of a string.
*/

char	*ft_str_capitalize(char *s)
{
	int		i;

	i = 0;
	if (ft_islower(s[i]))
		s[i] -= 32;
	while (s[i++])
	{
		if ((ft_isspace(s[i]) || ft_ispunct(s[i])) && ft_islower(s[i + 1]))
			s[i + 1] -= 32;
	}
	return (s);
}
