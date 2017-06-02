/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:17:52 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 20:17:53 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets every character of the string to the value ’\0’.
*/

void	ft_strclr(char *s)
{
	int		i;

	i = 0;
	if (s)
	{
		while (s[i])
			s[i++] = '\0';
	}
}
