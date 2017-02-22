/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 20:38:54 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/16 20:38:56 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Makes every letter in the string lowercase.
*/

char	*ft_str_to_lowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		if (str[i - 1] >= 'A' && 'Z' >= str[i - 1])
			str[i - 1] += 32;
	return (str);
}
