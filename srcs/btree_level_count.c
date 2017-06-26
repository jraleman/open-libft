/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 04:40:17 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/26 04:40:18 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the size of the largest branch passed as argument.
*/

int		btree_level_count(t_btree *root)
{
	return (root ? 1 + FT_MAX(btree_level_count(root->left), \
				btree_level_count(root->right)) : 0);
}
