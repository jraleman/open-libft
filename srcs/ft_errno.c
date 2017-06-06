/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errno.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 19:51:14 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/05 19:51:15 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errno.h"

/*
** Returns the error code from nbr.
** If nbr is over 135, returns minus one (-1), indicating an error.
*/

int		ft_errno(unsigned int nbr)
{
	return (nbr < 135 ? nbr : -1);
}
