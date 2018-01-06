/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 18:31:15 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/27 18:31:16 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

/*
** Functions by type stdlib.h
*/

int		ft_atoi(const char *str);
int		ft_atoi_base(const char *str, int base);
char	*ft_itoa(int n);
char	*ft_itoa_base(int value, int base);
void	*ft_realloc(void *ptr, size_t size);
void	*ft_calloc(size_t count, size_t size);

#endif
