/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 05:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/06/20 05:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Free a list.
*/

void		ft_lstfree(t_list **alst)
{
	t_list	*to_free;
	t_list	*tmp;

	tmp = *alst;
	to_free = *alst;
	if (*alst == NULL)
		return ;
	while (tmp)
	{
		to_free = tmp;
		tmp = tmp->next;
		free(to_free->content);
		to_free->content = NULL;
		free(to_free);
		to_free = NULL;
	}
	alst = NULL;
}
