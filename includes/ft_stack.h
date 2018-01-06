/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 18:30:40 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/27 18:30:41 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

/*
** Stack structure.
*/

typedef struct		s_stack
{
	double			value;
	struct s_stack	*next;
}					t_stack;

/*
** Functions by type stack.h
*/

void				ft_stck_push(t_stack *top, double newdata);
double				ft_stck_pop(t_stack *top);

#endif
