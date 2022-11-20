/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:18:14 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/20 12:13:58 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// The function returns the length of "hex" number
int	get_len_hex(unsigned long long hex)
{
	int	len_count;

	len_count = 0;
	while (hex != 0)
	{
		len_count++;
		hex /= 16;
	}
	return (len_count);
}

// The function converts decimal "hex" to dec
// by printing it using recursion
void	ft_hex_in_action(unsigned long long hex, char x_specifier)
{
	if (hex != 0)
	{
		ft_hex_in_action(hex / 16, x_specifier);
		if (hex % 16 < 10)
			ft_putchar_fd(hex % 16 + '0', 1);
		else
			ft_putchar_fd(hex % 16 + x_specifier - 10, 1);
	}
}

// The function takes a decimal number "hex" and
// "x_specifier" which is 'x' or 'X' So that I can
// print hex number either in capitals or in small letters
// The function returns the length of number in hex representation
int	ft_print_hex(unsigned int hex, char x_specifier)
{
	char		lower_or_upper;

	if (x_specifier == 'x')
		lower_or_upper = 'a';
	else
		lower_or_upper = 'A';
	if (hex == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	ft_hex_in_action(hex, lower_or_upper);
	return (get_len_hex(hex));
}
