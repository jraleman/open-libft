#!/bin/sh

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    check_norme.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/20 15:27:49 by jaleman           #+#    #+#              #
#    Updated: 2017/09/20 15:27:50 by jaleman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

if [[ $# -ge 1 ]] ; then
	for i do
		NORM=$(norminette "$i" | grep "error" | wc -l)
		if [[ $NORM -ne "0" ]] ; then
			echo "Error: One or more norm errors has been found."
			exit 1
		fi
	done
else
	echo "No arguments given! :("
	exit 2
fi
echo "Norminette passed! :D"
exit 0
