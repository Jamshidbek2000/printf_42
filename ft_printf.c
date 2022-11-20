/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:41:22 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/20 11:57:31 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// The function get list of arguments "args" and
// type specifier "ch" which helps use to identify
// what type of variable we need to get in order to write
// The function returns the number of chars that were printed
// To print the argument printing functions are used, 
// which are in "print_functions" folder
int	find_type_and_write(va_list args, char ch)
{
	int	var_len;

	var_len = 0;
	if (ch == 'c')
		var_len += ft_putchar_fd(va_arg(args, int), 1);
	else if (ch == 's')
		var_len += ft_print_str(va_arg(args, char *));
	else if (ch == 'p')
		var_len += ft_print_address(va_arg(args, unsigned long long));
	else if (ch == 'd' || ch == 'i')
		var_len += ft_print_dec(va_arg(args, int));
	else if (ch == 'u')
		var_len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (ch == 'x')
		var_len += ft_print_hex(va_arg(args, unsigned long), 'x');
	else if (ch == 'X')
		var_len += ft_print_hex(va_arg(args, unsigned long), 'X');
	else if (ch == '%')
		var_len += ft_putchar_fd('%', 1);
	return (var_len);
}

// The function reads the string "input" until the '\0'
// and prints every character, but,
// if there is a type specifier it passes the type
// specifier to the next function "find_type_and_write"
// The function returns the number of characters printed as a whole
int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		index;
	int		result;

	result = 0;
	if (input == NULL)
		return (result);
	index = 0;
	va_start(args, input);
	while (input[index] != '\0')
	{
		if (input[index] != '%')
		{
			write(1, &input[index], 1);
			result++;
		}
		else
		{
			result += find_type_and_write(args, input[index + 1]);
			index++;
		}
		index++;
	}
	va_end(args);
	return (result);
}
