/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:32:09 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/02 15:32:11 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

/*
** Define the structure called t_list, for ft_lst* function.
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** Define the bool typedef to use for older compilers.
*/
typedef enum		e_bool
{
	FALSE = 0,
	TRUE = 1
}					bool;

/*
** Functions from stdlib.h
*/
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
void				*ft_realloc(void *ptr, size_t size);

/*
** Functions from strings.h
*/
void				ft_bzero(void *s, size_t n);

/*
** Functions from string.h
*/
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *str);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little, size_t ln);

/*
** Functions from ctype.h
*/
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isblank(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isspace(int c);
int					ft_isxdigit(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isupper(int c);
int					ft_islower(int c);

/*
** Functions from stdio.h
*/
void				ft_putchar(char c);
void				ft_putnbr(int n);

/*
** Functions from math.h
*/
double				ft_sqrt(double x);

/*
** Functions from 42 by type stdlib
*/
char				*ft_itoa_base(int value, int base);

/*
** Functions from 42 by type string.
*/
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char				*ft_strnew(size_t size);
char				**ft_strsplit(const char *s, char c);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);

/*
** Functions from 42 by type stdio.
*/
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putendl(const char *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(const char *s);
void				ft_putstr_fd(const char *s, int fd);

/*
** Functions from 42 by type ctype.
*/
int					ft_iswspace(int c);
int					ft_ismathop(int c);

/*
** Functions from 42 by type list.
*/
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Useful functions created during 42 Piscine.
*/
size_t				ft_nbrlen(int nbr, int base);
int					ft_str_is_lowercase(char *str);
int					ft_str_is_numeric(char *str);
int					ft_str_is_printable(char *str);
int					ft_str_is_uppercase(char *str);
char				*ft_strcapitalize(char *str);
char				*ft_str_to_upcase(char *str);
char				*ft_str_to_lowcase(char *str);
size_t				ft_wordcount(const char *s, char c);
size_t				ft_wordlen(const char *s, char c);

/*
** Personal functions! :D
*/
int					*ft_array_copy(const int *arr, size_t n);
int					*ft_array_element_operation(const int *arr, size_t n, \
					char op, int val);
size_t				ft_array_element_repeated(int *arr, size_t n);
int					*ft_array_new(size_t size);
void				ft_array_print(int *arr, size_t n, char *encl);
int					*ft_array_remove_element(int *arr, size_t n, \
					unsigned int pos);
int					*ft_array_sort_insertion(const int *arr, size_t n);
int					*ft_array_rotate_left(int *arr, size_t n, unsigned int t);
int					*ft_array_rotate_right(int *arr, size_t n, unsigned int t);
void				ft_array_sort_bubble(int *tab, unsigned int size);
int					ft_do_op(int nbr1, int nbr2, char op);
char				*ft_program_name(char const *argv0);
int					ft_str_is_palindrome(char *str);

#endif
