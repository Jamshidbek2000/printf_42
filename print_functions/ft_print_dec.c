/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:44:22 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/02 10:20:28 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// used 1 function from outside

int	ft_print_dec(long number)
{
	ft_putnbr_fd(number, 1);
	if (number == 0)
		return (1);
	return (get_len_num(number));
}
