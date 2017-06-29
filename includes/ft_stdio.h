/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 18:30:50 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/27 18:30:51 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

/*
** Functions by type stdio.h
*/

int		ft_putchar(char c);
int		ft_putchar_fd(char c, int fd);
int		ft_putnchar(char c, int n);
int		ft_putnchar_fd(char c, int n, int fd);
int		ft_putstr(char const *s);
int		ft_putstr_fd(char const *s, int fd);
int		ft_putendl(char const *s);
int		ft_putendl_fd(char const *s, int fd);
int		ft_putnbr(int n);
int		ft_putnbr_fd(int n, int fd);
int		ft_putnbr_base(int nbr, char *base);
int		ft_putnbr_base_fd(int nbr, char *base, int fd);
int		ft_putunbr(uintmax_t n);
int		ft_putunbr_fd(uintmax_t n, int fd);
int		ft_putnstr(char const *s, size_t len);
int		ft_putnstr_fd(char const *s, size_t len, int fd);

#endif
