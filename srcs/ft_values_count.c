/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_values_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 21:16:30 by jaleman           #+#    #+#             */
/*   Updated: 2017/04/24 21:16:31 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the total number of values in a set of words.
*/

size_t		ft_values_count(char **values)
{
	size_t	i;

	i = 0;
	while (values[i] != NULL)
		i += 1;
	return (i);
}
