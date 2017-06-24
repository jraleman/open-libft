/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_ends_with.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 05:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/06/20 05:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the end of string s1 is the same as the whole string s2.
*/

int		ft_str_ends_with(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
  {
    if (s1[i] == s2[0] && ft_strcmp(s1 + i, s2) == 0)
        return (1);
    i += 1;
  }
	return (0);
}
