/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_extension.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 20:19:37 by jaleman           #+#    #+#             */
/*   Updated: 2017/03/11 20:19:38 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Validates if the file has a specific file extension (given by ext string).
** Returns a one (1) if it does, returns zero (0) otherwise.
*/

int		ft_file_extension(char *file, char *ext)
{
	return (ft_strequ(ft_strrchr(file, '.'), ext));
}
