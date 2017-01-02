/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 21:48:51 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/16 21:48:52 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the string is alphabetical.
*/

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		if (!ft_isalpha(str[i++]))
			return (0);
	return (1);
}
