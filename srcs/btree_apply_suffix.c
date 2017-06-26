/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 00:27:54 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/14 00:27:55 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function given as argument to the item of each node,
** using suffix traversal to search the tree.
*/

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	(*applyf)(root->item);
}
