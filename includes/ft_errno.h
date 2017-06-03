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

char	*g_errno[] =
{
	[FT_EPERM] = "Operation not permitted",
	[FT_ENOENT] = "No such file or directory",
	[FT_ESRCH] = "No such process",
	[FT_EINTR] = "Interrupted system call",
	[FT_EIO] = "Input/output error",
	[FT_ENXIO] = "No such device or address",
	[FT_E2BIG] = "Argument list too long",
	[FT_ENOEXEC] = "Exec format error",
	[FT_EBADF] = "Bad file descriptor",
	[FT_ECHILD] = "No child processes",
	[FT_EAGAIN] = "Resource temporarily unavailable",
	[FT_EWOULDBLOCK] = "Resource temporarily unavailable",
	[FT_ENOMEM] = "Cannot allocate memory",
	[FT_EACCES] = "Permission denied",
	[FT_EFAULT] = "Bad address",
	[FT_ENOTBLK] = "Block device required",
	[FT_EBUSY] = "Device or resource busy",
	[FT_EEXIST] = "File exists",
	[FT_EXDEV] = "Invalid cross-device link",
	[FT_ENODEV] = "No such device",
	[FT_ENOTDIR] = "Not a directory",
	[FT_EISDIR] = "Is a directory",
	[FT_EINVAL] = "Invalid argument",
	[FT_ENFILE] = "Too many open files in system",
	[FT_EMFILE] = "Too many open files",
	[FT_ENOTTY] = "Inappropriate ioctl for device",
	[FT_ETXTBSY] = "Text file busy",
	[FT_EFBIG] = "File too large",
	[FT_ENOSPC] = "No space left on device",
	[FT_ESPIPE] = "Illegal seek",
	[FT_EROFS] = "Read-only file system",
	[FT_EMLINK] = "Too many links",
	[FT_EPIPE] = "Broken pipe",
	[FT_EDOM] = "Numerical argument out of domain",
	[FT_ERANGE] = "Numerical result out of range",
	[FT_EDEADLK] = "Resource deadlock avoided",
	[FT_EDEADLOCK] = "Resource deadlock avoided",
	[FT_ENAMETOOLONG] = "File name too long",
	[FT_ENOLCK] = "No locks available",
	[FT_ENOSYS] = "Function not implemented",
	[FT_ENOTEMPTY] = "Directory not empty",
	[FT_ELOOP] = "Too many levels of symbolic links",
	[FT_ENOMSG] = "No message of desired type",
	[FT_EIDRM] = "Identifier removed",
	[FT_ECHRNG] = "Channel number out of range",
	[FT_EL2NSYNC] = "Level 2 not synchronized",
	[FT_EL3HLT] = "Level 3 halted",
	[FT_EL3RST] = "Level 3 reset",
	[FT_ELNRNG] = "Link number out of range",
	[FT_EUNATCH] = "Protocol driver not attached",
	[FT_ENOCSI] = "No CSI structure available",
	[FT_EL2HLT] = "Level 2 halted",
	[FT_EBADE] = "Invalid exchange",
	[FT_EBADR] = "Invalid request descriptor",
	[FT_EXFULL] = "Exchange full",
	[FT_ENOANO] = "No anode",
	[FT_EBADRQC] = "Invalid request code",
	[FT_EBADSLT] = "Invalid slot",
	[FT_EBFONT] = "Bad font file format",
	[FT_ENOSTR] = "Device not a stream",
	[FT_ENODATA] = "No data available",
	[FT_ETIME] = "Timer expired",
	[FT_ENOSR] = "Out of streams resources",
	[FT_ENONET] = "Machine is not on the network",
	[FT_ENOPKG] = "Package not installed",
	[FT_EREMOTE] = "Object is remote",
	[FT_ENOLINK] = "Link has been severed",
	[FT_EADV] = "Advertise error",
	[FT_ESRMNT] = "Srmount error",
	[FT_ECOMM] = "Communication error on send",
	[FT_EPROTO] = "Protocol error",
	[FT_EMULTIHOP] = "Multihop attempted",
	[FT_EDOTDOT] = "RFS specific error",
	[FT_EBADMSG] = "Bad message",
	[FT_EOVERFLOW] = "Value too large for defined data type",
	[FT_ENOTUNIQ] = "Name not unique on network",
	[FT_EBADFD] = "File descriptor in bad state",
	[FT_EREMCHG] = "Remote address changed",
	[FT_ELIBACC] = "Can not access a needed shared library",
	[FT_ELIBBAD] = "Accessing a corrupted shared library",
	[FT_ELIBSCN] = ".lib section in a.out corrupted",
	[FT_ELIBMAX] = "Attempting to link in too many shared libraries",
	[FT_ELIBEXEC] = "Cannot exec a shared library directly",
	[FT_EILSEQ] = "Invalid or incomplete multibyte or wide character",
	[FT_ERESTART] = "Interrupted system call should be restarted",
	[FT_ESTRPIPE] = "Streams pipe error",
	[FT_EUSERS] = "Too many users",
	[FT_ENOTSOCK] = "Socket operation on non-socket",
	[FT_EDESTADDRREQ] = "Destination address required",
	[FT_EMSGSIZE] = "Message too long",
	[FT_EPROTOTYPE] = "Protocol wrong type for socket",
	[FT_ENOPROTOOPT] = "Protocol not available",
	[FT_EPROTONOSUPPORT] = "Protocol not supported",
	[FT_ESOCKTNOSUPPORT] = "Socket type not supported",
	[FT_ENOTSUP] = "Operation not supported",
	[FT_EOPNOTSUPP] = "Operation not supported",
	[FT_EPFNOSUPPORT] = "Protocol family not supported",
	[FT_EAFNOSUPPORT] = "Address family not supported by protocol",
	[FT_EADDRINUSE] = "Address already in use",
	[FT_EADDRNOTAVAIL] = "Cannot assign requested address",
	[FT_ENETDOWN] = "Network is down",
	[FT_ENETUNREACH] = "Network is unreachable",
	[FT_ENETRESET] = "Network dropped connection on reset",
	[FT_ECONNABORTED] = "Software caused connection abort",
	[FT_ECONNRESET] = "Connection reset by peer",
	[FT_ENOBUFS] = "No buffer space available",
	[FT_EISCONN] = "Transport endpoint is already connected",
	[FT_ENOTCONN] = "Transport endpoint is not connected",
	[FT_ESHUTDOWN] = "Cannot send after transport endpoint shutdown",
	[FT_ETOOMANYREFS] = "Too many references: cannot splice",
	[FT_ETIMEDOUT] = "Connection timed out",
	[FT_ECONNREFUSED] = "Connection refused",
	[FT_EHOSTDOWN] = "Host is down",
	[FT_EHOSTUNREACH] = "No route to host",
	[FT_EALREADY] = "Operation already in progress",
	[FT_EINPROGRESS] = "Operation now in progress",
	[FT_ESTALE] = "Stale file handle",
	[FT_EUCLEAN] = "Structure needs cleaning",
	[FT_ENOTNAM] = "Not a XENIX named type file",
	[FT_ENAVAIL] = "No XENIX semaphores available",
	[FT_EISNAM] = "Is a named type file",
	[FT_EREMOTEIO] = "Remote I/O error",
	[FT_EDQUOT] = "Disk quota exceeded",
	[FT_ENOMEDIUM] = "No medium found",
	[FT_EMEDIUMTYPE] = "Wrong medium type",
	[FT_ECANCELED] = "Operation canceled",
	[FT_ENOKEY] = "Required key not available",
	[FT_EKEYEXPIRED] = "Key has expired",
	[FT_EKEYREVOKED] = "Key has been revoked",
	[FT_EKEYREJECTED] = "Key was rejected by service",
	[FT_EOWNERDEAD] = "Owner died",
	[FT_ENOTRECOVERABLE] = "State not recoverable",
	[FT_ERFKILL] = "Operation not possible due to RF-kill",
	[FT_EHWPOISON] = "Memory page has hardware error"
};

#endif
