/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:24:59 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/01 14:03:43 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_num_digits(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	new_n;
	int		size;
	char	*result;
	int		index;

	new_n = n;
	index = 0;
	if (n < 0)
	{
		new_n = (long)n * (-1);
		index = 1;
	}
	size = ft_num_digits(new_n) + index;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	result[size] = '\0';
	if (index == 1)
		result[0] = '-';
	while (index != size)
	{
		result[size-- - 1] = (new_n % 10) + '0';
		new_n = new_n / 10;
	}
	return (result);
}
