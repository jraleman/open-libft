/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 00:54:53 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 00:54:54 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Checks if the character is a letter.
*/

int		ft_isalpha(int c)
{
	if ((c >= 'A' && 'Z' >= c) || (c >= 'a' && 'z' >= c))
		return (1);
	return (0);
}
