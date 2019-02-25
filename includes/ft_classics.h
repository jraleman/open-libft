/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_classics.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 18:31:36 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/27 18:31:37 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CLASSICS_H
# define FT_CLASSICS_H

/*
** Miscellaneous functions
*/

int		ft_active_bits(int value);
int		ft_angle_to_degrees(int angle);
int		ft_compact(char **tab, int length);
int     ft_cisin(char *str, char c);
int		ft_is_big_endian(void);
int		ft_is_little_endian(void);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_palindrome(char *str);
int		ft_str_starts_with(char *s1, char *s2);
int		ft_str_ends_with(char *s1, char *s2);
int		ft_do_op(int nbr1, int nbr2, char op);
int		ft_file_extension(char *file, char *ext);
char	*ft_str_capitalize(char *str);
char	*ft_str_to_upcase(char *str);
char	*ft_str_to_lowcase(char *str);
char	*ft_program_name(char const *argv0);
char	*ft_remove_extension(char *filename);
char	*ft_str_remove_whitespace(char *str);
char	*ft_separated_values(char **values, char c);
void	ft_swap(int *a, int *b);
void	ft_textstyle(int attr, int fg, int bg);
void	ft_textstyle_reset(void);
void	ft_puterror(char const *msg, int ret);
void	ft_puterror_fd(char const *msg, int ret, int fd);
size_t	ft_nbrcount(const char *s, char c);
size_t	ft_wordcount(const char *s, char c);
size_t	ft_wordlen(const char *s, char c);
size_t	ft_char_count(char **values);
size_t	ft_values_count(char **values);

#endif
