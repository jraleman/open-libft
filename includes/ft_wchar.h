/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 18:30:57 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/27 18:30:58 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WCHAR_H
# define FT_WCHAR_H

/*
** Functions by type wchar.h
*/

int			ft_wclen(wchar_t wchar);
int			ft_putwchar(wchar_t wc);
int			ft_putwchar_fd(wchar_t wc, int fd);
int			ft_putwstr(wchar_t *ws);
int			ft_putwstr_fd(wchar_t *ws, int fd);
size_t		ft_wcslen(wchar_t *ws);
wchar_t		*ft_wcsdup(wchar_t *src);
wchar_t		*ft_wcscpy(wchar_t *dst, const wchar_t *src);
wchar_t		*ft_wcsnew(size_t size);
wchar_t		*ft_wcsncpy(wchar_t *dst, const wchar_t *src, size_t n);

#endif
