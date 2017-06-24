/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_palindrome.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 12:37:58 by jaleman           #+#    #+#             */
/*   Updated: 2016/12/02 12:38:01 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if the string is palindrome.
** If string is NULL, returns zero (0).
*/

int		ft_str_is_palindrome(char *str)
{
	int		ret;
	char	*str1;
	char	*str2;

	ret = 0;
	if (str)
	{
		str1 = ft_str_remove_whitespace(str);
		str2 = ft_str_remove_whitespace(ft_strrev(str));
		ret = ft_strequ(str1, str2);
		free(str1);
		free(str2);
	}
	return (ret);
}
