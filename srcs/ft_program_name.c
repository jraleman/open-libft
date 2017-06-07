/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_program_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 20:45:07 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/10 20:45:09 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Gets the name of the program (argv[0]).
*/

char	*ft_program_name(char const *argv0)
{
	char *name;

	name = (char *)argv0;
	while (*name && *name != '/')
		name += 1;
	return (!name ? (char *)argv0 : name + 1);
}
