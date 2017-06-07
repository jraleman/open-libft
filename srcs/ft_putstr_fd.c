/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:27:05 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/04 13:27:06 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the file descriptor fd.
*/

int		ft_putstr_fd(char const *s, int fd)
{
	int		i;
	int		ret;

	i = 0;
	ret = -1;
	if (s != NULL)
	{
		ret = 0;
		while (s[i] && ret >= 0)
			ret = ft_putchar_fd(s[i++], fd);
	}
	return (ret);
}
