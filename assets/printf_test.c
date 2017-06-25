/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 00:05:17 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/22 00:05:18 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int				i;
	int				mi;
	char			*np;
	char			*ptr;
	char			buf[80];
	unsigned int	bs;

	i = 5;
	np = NULL;
	bs = sizeof(int) * 8;
	ptr = "Hello world!";
	mi = (1 << (bs - 1)) + 1;

	/* Strings */
	ft_printf("\n\nStrings:\n\n");
	printf("Return Value: 13 / %d\n",
	ft_printf("%s\n", ptr));
	printf("Return Value: 15 / %d\n",
	ft_printf("ft_printf test\n"));

	/* Wide Characters */
	ft_printf("\n\n\nWide Characters:\n\n");
	printf("Return Value: 51 / %d\n",
	ft_printf("ο Δικαιοπολις εν αγρω εστιν\n"));

	/* Octal, Decimal, Hex*/
	ft_printf("\n\n\nNumbers:\n\n");
	printf("Return Value: 6 / %d\n",
	ft_printf("%d = 5\n", i));
	printf("Return Value: 24 / %d\n",
	ft_printf("%d = - max_int\n", mi));
	printf("Return Value: 13 / %d\n",
	ft_printf("char %c = 'a'\n", 'a'));
	printf("Return Value: 12 / %d\n",
	ft_printf("hex %x = ff\n", 0xff));
	printf("Return Value: 12 / %d\n",
	ft_printf("hex %X = FF\n", 0xff));
	printf("Return Value: 12 / %d\n",
	ft_printf("hex %02x = 00\n", 0));
	printf("Return Value: 47 / %d\n",
	ft_printf("signed %d = unsigned %u = hex %x\n", -3, -3, -3));

	/* Special things*/
	ft_printf("\n\n\nSpecial things...(?):\n\n");
	printf("Return Value: 14 / %d\n",
	ft_printf("%d %s(s)%%\n", 0, "message"));
	printf("Return Value: 31 / %d\n",
	ft_printf("newline with n at the end: $\nn\n"));
	printf("Return Value: 20 / %d\n",
	ft_printf("%d %s(s) with %%\n", 0, "message"));
	printf("Return Value: 26 / %d\n",
	ft_printf("pointer ptr = %p\n", ptr));
	printf("Return Value: 23 / %d\n",
	ft_printf("%s is null pointer\n", np));
	printf("Return Value: 20 / %d\n",
	ft_printf("%c is null character\n", '\0'));

	/* Text Justification */
	ft_printf("\n\n\nJustify text:\n\n");
	sprintf(buf, "justif: \"%-10s\"\n", "left");
	printf("Return Value: 21 / %d\n",
	ft_printf("%s", buf));
	sprintf(buf, "justif: \"%10s\"\n", "right");
	printf("Return Value: 21 / %d\n",
	ft_printf("%s", buf));
	sprintf(buf, " 3: %04d zero padded\n", 3);
	printf("Return Value: 21 / %d\n",
	ft_printf("%s", buf));
	sprintf(buf, " 3: %-4d left justif.\n", 3);
	printf("Return Value: 22 / %d\n",
	ft_printf("%s", buf));
	sprintf(buf, " 3: %4d right justif.\n", 3);
	printf("Return Value: 23 / %d\n",
	ft_printf("%s", buf));
	sprintf(buf, "-3: %04d zero padded\n", -3);
	printf("Return Value: 21 / %d\n",
	ft_printf("%s", buf));
	sprintf(buf, "-3: %-4d left justif.\n", -3);
	printf("Return Value: 22 / %d\n",
	ft_printf("%s", buf));
	sprintf(buf, "-3: %4d right justif.\n", -3);
	printf("Return Value: 23 / %d\n",
	ft_printf("%s", buf));

	/* Long Ass String */
	ft_printf("\n\n\nCool story:\n\n");
	printf("Return Value: 1561 / %d\n",
	ft_printf("What the fuck did you just fucking say about me, you little \n"
	"bitch? I’ll have you know I graduated top of my class in the Navy \n"
	"Seals, and I’ve been involved in numerous secret raids on Al-Quaeda, \n"
	"and I have over 300 confirmed kills. I am trained in gorilla warfare \n"
	"and I’m the top sniper in the entire US armed forces. You are nothing \n"
	"to me but just another target. I will wipe you the fuck out with \n"
	"precision the likes of which has never been seen before on this Earth, \n"
	"mark my fucking words. You think you can get away with saying that shit \n"
	"to me over the Internet? Think again, fucker. As we speak I am \n"
	"contacting my secret network of spies across the USA and your IP is \n"
	"being traced right now so you better prepare for the storm, maggot. \n"
	"The storm that wipes out the pathetic little thing you call your life. \n"
	"You’re fucking dead, kid. I can be anywhere, anytime, and I can kill \n"
	"you in over seven hundred ways, and that’s just with my bare hands. \n"
	"Not only am I extensively trained in unarmed combat, but I have access \n"
	"to the entire arsenal of the United States Marine Corps and I will use \n"
	"it to its full extent to wipe your miserable ass off the face of the \n"
	"continent, you little shit. If only you could have known what unholy \n"
	"retribution your little “clever” comment was about to bring down upon \n"
	"you, maybe you would have held your fucking tongue. But you couldn’t, \n"
	"you didn’t, and now you’re paying the price, you goddamn idiot. I will \n"
	"shit fury all over you and you will drown in it. You’re fucking dead, \n"
	"kiddo.\n"));

	return (0);
}
