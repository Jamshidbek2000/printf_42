/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_len_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:35:16 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/02 10:21:51 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	get_len_num(long number)
{
	int	len_count;

	if (number < 0)
	{
		len_count = 1;
		number *= -1;
	}
	else
		len_count = 0;
	while (number != 0)
	{
		len_count++;
		number /= 10;
	}
	return (len_count);
}
