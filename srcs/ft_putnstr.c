/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 15:37:58 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/17 15:37:58 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the standard output up to len number of characters.
** If len is greater than the total len of the string s, it outputs the string
** completely.
*/

int		ft_putnstr(const char *s, size_t len)
{
	return (ft_putnstr_fd(s, len, STDOUT_FILENO));
}
