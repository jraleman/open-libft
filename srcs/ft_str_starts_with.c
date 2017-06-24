/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_starts_with.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 05:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/06/20 05:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the start of string s1 is the same as the whole string s2.
*/

int		ft_str_starts_swith(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
  {
    if (s1[i] != s2[0])
        return (0);
    i += 1;
  }
	return (1);
}
