/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 02:24:17 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/16 02:24:18 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the string is can be printed.
*/

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		if (!ft_isprint(str[i++]))
			return (0);
	return (1);
}
