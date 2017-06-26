/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_add_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 00:27:37 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/14 00:27:38 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Add a new node to a binary tree.
** Takes the root of the tree as paramenter.
*/

void	btree_add_node(t_btree **root, t_btree *node)
{
	t_btree		*tmp;

	tmp = *root;
	if (tmp == NULL)
	{
		tmp = node;
		*root = tmp;
	}
	else if (node->item < tmp->item)
		btree_add_node(&(tmp->left), node);
	else if (node->item > tmp->item)
		btree_add_node(&(tmp->right), node);
}
