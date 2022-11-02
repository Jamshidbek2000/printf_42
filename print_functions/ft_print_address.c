/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:39:26 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/02 10:20:00 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// used 1 function outside

// to be fixed!!!
int	ft_print_address(unsigned long long address)
{
	int	count;

	count = write(1, "0x", 2);
	if (address != 0)
	{
		ft_hex_in_action(address, 'a');
		count += get_len_hex(address);
	}
	else
		count += write(1, "0", 1);
	return (count);
}
