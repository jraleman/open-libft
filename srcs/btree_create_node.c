/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 00:28:08 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/14 00:28:09 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates a new element to a binary tree.
** It initialise its item to the argument’s value, and all other elements to 0.
*/

t_btree		*btree_create_node(void *item)
{
	t_btree		*node;

	if (!(node = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	if (node)
	{
		node->left = 0;
		node->right = 0;
		node->item = item;
	}
	return (node);
}
