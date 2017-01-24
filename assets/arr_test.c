/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:46:42 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 15:46:43 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"





COMPARE FUCNTIUON MAKE IN A FILE







int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int		main(void)
{
	int		array[] = {34, 42, 2, 67, 2};
	int		size = FT_ARR_SIZE(array);
	int		*new_array = ft_arr_new(size);

	ft_putnbr(FT_ARR_SIZE(new_array));

	/* Testing ft_arr_print */
	ft_putstr("Printing an Array: ");
	ft_arr_print(array, size, "[]");

	/* Testing ft_arr_new */
	ft_putstr("Creating a new array with the same number of elements: ");
	ft_arr_print(new_array, size, "[]");

	/* Testing ft_arr_cpy */
	ft_putstr("Copying the old array to the new one: ");
	new_array = ft_arr_cpy(array, size);
	ft_arr_print(new_array, size, "[]");

	/* Testing ft_arr_sort_insrt */
	ft_putstr("Sorting the old array by sort instertion: ");
	ft_arr_sort_insrt(array, size);
	ft_arr_print(array, size, "[]");

	/* Testing ft_arr_elem_rptd */
	ft_putstr("How many elements are repeated (same value): ");
	ft_putnbr(ft_arr_elem_rptd(array, size));
	ft_putchar('\n');

	/* Testing ft_arr_do_op */
	ft_putstr("Making some math operation to the elements of the new array: ");
	new_array = ft_arr_do_op(array, size, '*', 2);
	ft_arr_print(new_array, size, "[]");

	/* Testing ft_arr_elem_pop */
	ft_putstr("Pop an element from the new array: ");
	new_array = ft_arr_elem_pop(new_array,  size, 2);
	ft_arr_print(new_array, size, "[]");

	/* Testing ft_arr_rotl */
	ft_putstr("Rotate the elements to the left (from the old array): ");
	ft_arr_rotl(array, size, 1);
	ft_arr_print(array, size, "[]");

	/* Testing ft_arr_rotr */
	ft_putstr("Rotate the elements to the right (from the old array): ");
	ft_arr_rotr(array, size, 1);
	ft_arr_print(array, size, "[]");

	return (0);
}
