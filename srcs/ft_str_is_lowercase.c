/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 01:32:09 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/16 01:32:10 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the string is alphabetical with lowercase letters only.
*/

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		if (!ft_islower(str[i++]))
			return (0);
	return (1);
}
