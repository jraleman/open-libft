/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_textstyle_reset.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:22:51 by jaleman           #+#    #+#             */
/*   Updated: 2017/01/23 12:22:53 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Reset the attributes and colors of the printed text.
*/

void	ft_textstyle_reset(void)
{
	ft_putstr("\x1B[03040m");
}
