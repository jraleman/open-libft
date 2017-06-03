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

int		main(void)
{
	int		array[] = {34, 42, 2, 67, 2};
	int		size = FT_SIZE(array);
	int		*new_array = ft_array_new(size);

	/* Testing array size */
	ft_putendl("Size of the array: ");
	ft_putnbr(size);
	ft_putchar('\n');

	/* Testing ft_array_print */
	ft_putendl("Printing an Array: ");
	ft_array_print(array, size, "[]");

	/* Testing ft_arr_new */
	ft_putendl("Creating a new array with the same number of elements: ");
	ft_array_print(new_array, size, "[]");

	/* Testing ft_array_copy */
	ft_putendl("Copying the old array to the new one: ");
	ft_array_copy(array, new_array, size, size);
	ft_array_print(new_array, size, "[]");

	/* Testing ft_array_insertion_srt */
	ft_putendl("Sorting the old array by instertion sort: ");
	ft_array_insertion_sort(array, size);
	ft_array_print(array, size, "[]");

	/* Testing ft_array_repeated_count */
	ft_putendl("How many elements are repeated (same value): ");
	ft_putnbr(ft_array_repeated_count(array, size));
	ft_putchar('\n');

	/* Testing ft_array_do_op */
	ft_putendl("Making some math operation to the elements of the new array: ");
	ft_array_do_op(new_array, size, '*', 2);
	ft_array_print(new_array, size, "[]");

	/* Testing ft_array_pop */
	ft_putendl("Pop an element from the new array: ");
	ft_array_pop(new_array,  size, 2);
	ft_array_print(new_array, size, "[]");

	/* Testing ft_array_rotate_left */
	ft_putendl("Rotate the elements to the left (from the old array): ");
	ft_array_rotate_left(array, size, 1);
	ft_array_print(array, size, "[]");

	/* Testing ft_array_rotate_right */
	ft_putendl("Rotate the elements to the right (from the old array): ");
	ft_array_rotate_right(array, size, 1);
	ft_array_print(array, size, "[]");

	return (0);
}
