/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:26:37 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:26:38 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** Checks if the character is a print one, excluding space.
*/

int		ft_isgraph(int c)
{
	if (c >= '!' && '~' >= c)
		return (0);
	return (1);
}
