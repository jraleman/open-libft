/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 18:30:09 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/27 18:30:10 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

/*
** Functions by type math.h
*/

int					ft_abs(int i);
int					ft_min(int x, int y);
int					ft_min(int x, int y);
int					ft_isprime(long unsigned int nbr);
double				ft_sqrt(double x);
double				ft_trunc(double x);
double				ft_ceil(double x);
double				ft_round(double x);
double				ft_floor(double x);
double				ft_pow(double x, int y);
double				ft_hypot(double x, double y);
long double			ft_sqrtl(long double x);
long double			ft_truncl(long double x);
long double			ft_ceill(long double x);
long double			ft_roundl(long double x);
long double			ft_floorl(long double x);
long double			ft_powl(long double x, long int y);
long double			ft_hypotl(long double x, long double y);
unsigned int		ft_collatz_conjecture(unsigned int base);
long unsigned int	ft_nextprime(long unsigned int nbr);
size_t				ft_nbrlen(int nbr, int base);
size_t				ft_factorial(unsigned int nb);
size_t				ft_fibonacci(unsigned int index);
size_t				ft_find_next_prime(unsigned int nb);

#endif
