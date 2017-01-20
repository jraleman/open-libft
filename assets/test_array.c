/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define NUM_ELEM 5

int		main(void)
{
	int		array[NUM_ELEM] = {34, 42, 2, 67, 2};
	int		*new_array;

	/* Testing ft_array_print */
	ft_putstr("ft_array_print: ");
	ft_array_print(array, NUM_ELEM, "[]");

	/* Testing ft_array_new( */
	ft_putstr("ft_array_new: ");
	new_array = ft_array_new(NUM_ELEM);
	ft_array_print(new_array, NUM_ELEM, "[]");

	/* Testing ft_array_copy */
	ft_putstr("ft_array_copy: ");
	new_array = ft_array_copy(array, NUM_ELEM);
	ft_array_print(new_array, NUM_ELEM, "[]");

	/* Testing ft_array_sort_insertion */
	ft_putstr("ft_array_sort_insertion: ");
	new_array = ft_array_sort_insertion(new_array, NUM_ELEM);
	ft_array_print(new_array, NUM_ELEM, "[]");

	/* Testing ft_array_element_repeated */
	ft_putstr("ft_array_element_repeated: ");
	ft_putnbr(ft_array_element_repeated(new_array, NUM_ELEM));
	ft_putchar('\n');

	/* Testing ft_array_element_operation */
	ft_putstr("ft_array_element_operation: ");
	new_array = ft_array_element_operation(new_array, NUM_ELEM, '*', 2);
	ft_array_print(new_array, NUM_ELEM, "[]");

	/* Testing ft_array_remove_element */
	ft_putstr("ft_array_remove_element: ");
	new_array = ft_array_remove_element(new_array,  NUM_ELEM, 2);
	ft_array_print(new_array, NUM_ELEM, "[]");

	/* Testing ft_array_rotate_left */
	ft_putstr("ft_array_rotate_left: ");
	new_array = ft_array_rotate_left(new_array, NUM_ELEM, 1);
	ft_array_print(new_array, NUM_ELEM, "[]");

	/* Testing ft_array_rotate_right */
	ft_putstr("ft_array_rotate_right: ");
	new_array = ft_array_rotate_right(new_array, NUM_ELEM, 1);
	ft_array_print(new_array, NUM_ELEM, "[]");

	return (0);
}
