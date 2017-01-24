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

char	*ft_str_capitalize(char *str)
{
	int		i;

	i = 0;
	if (ft_islower(str[i]))
		str[i] -= 32;
	while (str[i++])
		if (ft_isspace(str[i]) || ft_ispunct(str[i]))
			if (ft_islower(str[i + 1]))
				str[i + 1] -= 32;
	return (str);
}
