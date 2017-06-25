/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errno_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 20:42:29 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/05 20:42:29 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	printf("errno    : %d\n", ft_errno(FT_ENOENT));
	printf("strerror : %s\n", ft_strerror(FT_ENOENT));
	return (0);
}
