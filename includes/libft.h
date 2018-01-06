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

/*
** Header files dependencies.
*/

# include <wchar.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <sys/types.h>

/*
** Header files implementation.
*/

# include "btree.h"
# include "ft_math.h"
# include "ft_list.h"
# include "ft_array.h"
# include "ft_errno.h"
# include "ft_ctype.h"
# include "ft_stack.h"
# include "ft_stdio.h"
# include "ft_wchar.h"
# include "ft_matrix.h"
# include "ft_printf.h"
# include "ft_stdlib.h"
# include "ft_string.h"
# include "ft_strings.h"
# include "ft_classics.h"
# include "get_next_line.h"

/*
** Attributes for printed text.
*/

# define FT_RESET			(0)
# define FT_BOLD			(1)
# define FT_DIM				(2)
# define FT_ITALICS			(3)
# define FT_UNDERLINE		(4)
# define FT_REVERSE			(7)
# define FT_HIDDEN			(8)
# define FT_STROKE			(9)

/*
** Colors for printed text.
*/

# define FT_BLACK			(0)
# define FT_RED				(1)
# define FT_GREEN			(2)
# define FT_YELLOW			(3)
# define FT_BLUE			(4)
# define FT_MAGENTA			(5)
# define FT_CYAN			(6)
# define FT_WHITE			(7)

/*
** Macros for the limits of the variables.
*/

# define FT_CHAR_BIT		(8)
# define FT_MB_LEN_MAX		(1)
# define FT_SCHAR_MIN		(-128)
# define FT_SCHAR_MAX		(127)
# define FT_UCHAR_MAX		(255)
# define FT_CHAR_MIN		(-128)
# define FT_CHAR_MAX		(127)
# define FT_SHRT_MIN		(-32768)
# define FT_SHRT_MAX		(32767)
# define FT_USHRT_MAX		(65535)
# define FT_INT_MIN			(-2147483648)
# define FT_INT_MAX			(2147483647)
# define FT_LONG_MIN		(-9223372036854775808)
# define FT_LONG_MAX		(9223372036854775807)
# define FT_ULONG_MAX		(18446744073709551615)

/*
** Macro math constants.
*/

# define FT_M_E				(2.71828182845904523540)
# define FT_M_LOG2E			(1.44269504088896340740)
# define FT_M_LOG10E		(0.43429448190325182765)
# define FT_M_LN2			(0.69314718055994530942)
# define FT_M_LN10			(2.30258509299404568402)
# define FT_M_PI			(3.14159265358979323846)
# define FT_M_PI_2			(1.57079632679489661923)
# define FT_M_PI_4			(0.78539816339744830962)
# define FT_M_1_PI			(0.31830988618379067154)
# define FT_M_2_PI			(0.63661977236758134308)
# define FT_M_2_SQRTPI		(1.12837916709551257390)
# define FT_M_SQRT2			(1.41421356237309504880)
# define FT_M_SQRT1_2		(0.70710678118654752440)

/*
** Macro functions.
*/

# define FT_LO(num)			((num) & 0x00FF)
# define FT_HI(num)			(((num) & 0xFF00) >> 8)
# define FT_MIN(x, y)		(x) < (y) ? (x) : (y)
# define FT_MAX(x, y)		(x) > (y) ? (x) : (y)
# define FT_ABS(x)			(((x) < 0) ? -(x) : (x))
# define FT_SIZE(a)			(sizeof(a) / sizeof(a[0]))
# define FT_SWAP(a, b)		({a ^= b; b ^= a; a ^= b;})
# define FT_SQUARE(x)		(x * x)
# define FT_CUBE(x)			(x * x * x)
# define FT_BIT(x)			(1 << (x))
# define FT_ISDIGIT(a)		(a >= 48 && a <= 57)
# define FT_ISUPPER(a)		(a >= 'A' && a <= 'Z')
# define FT_ISLOWER(a)		(a >= 'a' && a <= 'z')
# define FT_ISALPHA(a)		(FT_ISUPPER(a) || FT_ISLOWER(a))
# define FT_ISALNUM(a)		(FT_ISALPHA(a) || FT_ISDIGIT(a))
# define FT_ISASCII(a)		(a >= 0 && a <= 127)
# define FT_ISBLANK(a)		(a == ' ' || a == '\t')
# define FT_ISCNTRL(a)		((a >= 0 && a <= 37) || (a == 127))
# define FT_ISGRAPH(a)		(a >= 33 && a <= 126)
# define FT_ISPRINT(a)		(a >= 32 && a <= 126)
# define FT_ISSPACE(a)		((a >= 9 && a <= 13) || (a == 32))
# define FT_TOLOWER(a)		(a >= 'A' && a <= 'Z' ? a + 32 : a)
# define FT_TOUPPER(a)		(a >= 'a' && a <= 'z' ? a - 32 : a)
# define FT_STRCMP(A, o, B)	(ft_strcmp((A), (B)) o 0)
# define FT_MEMCMP(A, o, B)	(ft_memcmp((A), (B)) o 0)

/*
** Define the bool typedef to use for older compilers.
*/

typedef enum		e_bool
{
	FALSE = 0,
	TRUE = 1
}					t_bool;

#endif
