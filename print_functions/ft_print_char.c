/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:48:11 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/20 11:58:30 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// The function writes a char "ch"
// to the console and returns 1
// as a number of chars were printed
int	ft_print_char(char ch)
{
	write(1, &ch, 1);
	return (1);
}
