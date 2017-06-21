/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errno.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:41:58 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/02 14:41:59 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERRNO_H
# define FT_ERRNO_H

/*
** Macros for errno messages.
*/

# define FT_NA					(0)
# define FT_EPERM				(1)
# define FT_ENOENT				(2)
# define FT_ESRCH				(3)
# define FT_EINTR				(4)
# define FT_EIO					(5)
# define FT_ENXIO				(6)
# define FT_E2BIG				(7)
# define FT_ENOEXEC				(8)
# define FT_EBADF				(9)
# define FT_ECHILD				(10)
# define FT_EAGAIN				(11)
# define FT_EWOULDBLOCK			(12)
# define FT_ENOMEM				(13)
# define FT_EACCES				(14)
# define FT_EFAULT				(15)
# define FT_ENOTBLK				(16)
# define FT_EBUSY				(17)
# define FT_EEXIST				(18)
# define FT_EXDEV				(19)
# define FT_ENODEV				(20)
# define FT_ENOTDIR				(21)
# define FT_EISDIR				(22)
# define FT_EINVAL				(23)
# define FT_ENFILE				(24)
# define FT_EMFILE				(25)
# define FT_ENOTTY				(26)
# define FT_ETXTBSY				(27)
# define FT_EFBIG				(28)
# define FT_ENOSPC				(29)
# define FT_ESPIPE				(30)
# define FT_EROFS				(31)
# define FT_EMLINK				(32)
# define FT_EPIPE				(33)
# define FT_EDOM				(34)
# define FT_ERANGE				(35)
# define FT_EDEADLK				(36)
# define FT_EDEADLOCK			(37)
# define FT_ENAMETOOLONG		(38)
# define FT_ENOLCK				(39)
# define FT_ENOSYS				(40)
# define FT_ENOTEMPTY			(41)
# define FT_ELOOP				(42)
# define FT_ENOMSG				(43)
# define FT_EIDRM				(44)
# define FT_ECHRNG				(45)
# define FT_EL2NSYNC			(46)
# define FT_EL3HLT				(47)
# define FT_EL3RST				(48)
# define FT_ELNRNG				(49)
# define FT_EUNATCH				(50)
# define FT_ENOCSI				(51)
# define FT_EL2HLT				(52)
# define FT_EBADE				(53)
# define FT_EBADR				(54)
# define FT_EXFULL				(55)
# define FT_ENOANO				(56)
# define FT_EBADRQC				(57)
# define FT_EBADSLT				(58)
# define FT_EBFONT				(59)
# define FT_ENOSTR				(60)
# define FT_ENODATA				(61)
# define FT_ETIME				(62)
# define FT_ENOSR				(63)
# define FT_ENONET				(64)
# define FT_ENOPKG				(65)
# define FT_EREMOTE				(66)
# define FT_ENOLINK				(67)
# define FT_EADV				(68)
# define FT_ESRMNT				(69)
# define FT_ECOMM				(70)
# define FT_EPROTO				(71)
# define FT_EMULTIHOP			(72)
# define FT_EDOTDOT				(73)
# define FT_EBADMSG				(74)
# define FT_EOVERFLOW			(75)
# define FT_ENOTUNIQ			(76)
# define FT_EBADFD				(77)
# define FT_EREMCHG				(78)
# define FT_ELIBACC				(79)
# define FT_ELIBBAD				(80)
# define FT_ELIBSCN				(81)
# define FT_ELIBMAX				(82)
# define FT_ELIBEXEC			(83)
# define FT_EILSEQ				(84)
# define FT_ERESTART			(85)
# define FT_ESTRPIPE			(86)
# define FT_EUSERS				(87)
# define FT_ENOTSOCK			(88)
# define FT_EDESTADDRREQ		(89)
# define FT_EMSGSIZE			(90)
# define FT_EPROTOTYPE			(91)
# define FT_ENOPROTOOPT			(92)
# define FT_EPROTONOSUPPORT		(93)
# define FT_ESOCKTNOSUPPORT		(94)
# define FT_ENOTSUP				(95)
# define FT_EOPNOTSUPP			(96)
# define FT_EPFNOSUPPORT		(97)
# define FT_EAFNOSUPPORT		(98)
# define FT_EADDRINUSE			(99)
# define FT_EADDRNOTAVAIL		(100)
# define FT_ENETDOWN			(101)
# define FT_ENETUNREACH			(102)
# define FT_ENETRESET			(103)
# define FT_ECONNABORTED		(104)
# define FT_ECONNRESET			(105)
# define FT_ENOBUFS				(106)
# define FT_EISCONN				(107)
# define FT_ENOTCONN			(108)
# define FT_ESHUTDOWN			(109)
# define FT_ETOOMANYREFS		(110)
# define FT_ETIMEDOUT			(111)
# define FT_ECONNREFUSED		(112)
# define FT_EHOSTDOWN			(113)
# define FT_EHOSTUNREACH		(114)
# define FT_EALREADY			(115)
# define FT_EINPROGRESS			(116)
# define FT_ESTALE				(117)
# define FT_EUCLEAN				(118)
# define FT_ENOTNAM				(119)
# define FT_ENAVAIL				(120)
# define FT_EISNAM				(121)
# define FT_EREMOTEIO			(122)
# define FT_EDQUOT				(123)
# define FT_ENOMEDIUM			(124)
# define FT_EMEDIUMTYPE			(125)
# define FT_ECANCELED			(126)
# define FT_ENOKEY				(127)
# define FT_EKEYEXPIRED			(128)
# define FT_EKEYREVOKED			(129)
# define FT_EKEYREJECTED		(130)
# define FT_EOWNERDEAD			(131)
# define FT_ENOTRECOVERABLE		(132)
# define FT_ERFKILL				(133)
# define FT_EHWPOISON			(134)

/*
** Global variable g_errno.
*/

# ifndef GLOBAL_VAR
#  define GLOBAL_VAR

extern char		*g_errno[];

# endif

/*
** Prototypes
*/

int		ft_errno(int nbr);
char	*ft_strerror(int nbr);

#endif
