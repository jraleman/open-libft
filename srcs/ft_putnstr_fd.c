/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 15:30:21 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/17 15:30:25 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the file descriptor fd (len number of characters).
** If len is greater than the total len of the string s, it outputs the string
** completely.
*/

int		ft_putnstr_fd(char const *s, size_t len, int fd)
{
	if (s != NULL)
	{
		if (ft_strlen(s) < len)
			len = ft_strlen(s);
		return (write(fd, s, len));
	}
	return (-1);
}
