/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 05:39:32 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/11 05:39:33 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

/*
** Header files dependencies.
*/

# include <stdlib.h>

/*
** Binary tree structure.
*/

typedef struct		s_btree
{
	int				*item;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

/*
** Binary tree functions prototype
*/

t_btree				*btree_create_node(void *item);
void				btree_add_node(t_btree **root, t_btree *node);
void				btree_apply_infix(t_btree *root, void (*applyf)(void *));
void				btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void				btree_apply_prefix(t_btree *root, void (*applyf)(void *));

#endif
