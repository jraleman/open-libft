/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 18:31:03 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/27 18:31:04 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATRIX_H
# define FT_MATRIX_H

/*
** Functions by type matrix.h
*/

int		**ft_matrix_new(int row, int col);
void	ft_matrix_delete(int **matrix, int row);

#endif
