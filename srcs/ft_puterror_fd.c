/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 19:10:33 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/21 19:10:34 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string msg to the file descriptor fd, followed by an exit of the
** program with a custom return value (defined by ret).
*/

void	ft_puterror_fd(char const *msg, int ret, int fd)
{
	ft_putendl_fd(msg, fd);
	exit(ret);
}
