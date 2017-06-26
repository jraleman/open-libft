/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/14 00:27:47 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/14 00:27:48 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function given as argument to the item of each node,
** using infix traversal to search the tree.
*/

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	btree_apply_infix(root->right, applyf);
}
