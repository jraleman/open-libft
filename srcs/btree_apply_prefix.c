/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 00:28:01 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/14 00:28:02 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function given as argument to the item of each node,
** using prefix traversal to search the tree.
*/

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	(*applyf)(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}
