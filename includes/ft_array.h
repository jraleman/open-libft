/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 18:30:23 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/27 18:30:24 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

/*
** Functions by type array.h
*/

int		ft_array_max_value(int *arr, int length);
int		*ft_array_new(size_t size);
int		*ft_array_copy(const int *src, int *dst, size_t n_src, size_t n_dst);
int		*ft_array_rotate_left(int *arr, size_t size, unsigned int tms);
int		*ft_array_rotate_right(int *arr, size_t size, unsigned int tms);
int		*ft_array_pop(int *arr, size_t size, unsigned int pos);
int		*ft_array_do_op(int *arr, size_t size, char op, int val);
void	ft_array_delete(int *arr);
void	ft_array_print(int *arr, size_t size, char *encl);
void	ft_array_bubble_sort(int *arr, size_t size);
void	ft_array_insertion_sort(int *arr, size_t size);
size_t	ft_array_repeated_count(int *arr, size_t size);

#endif
