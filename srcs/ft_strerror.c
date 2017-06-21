/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 19:50:48 by jaleman           #+#    #+#             */
/*   Updated: 2017/06/05 19:50:48 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_errno.h"

/*
** Defined errors description.
*/

char	*g_errno[] =
{
	[FT_NA] = "Not defined",
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

/*
** Returns the error description from nbr.
** If nbr is over 135, returns NULL.
*/

char	*ft_strerror(int nbr)
{
	return ((nbr <= 134 && nbr >= 0) ? g_errno[nbr] : NULL);
}
