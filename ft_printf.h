/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jergashe <jergashe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:42:34 by jergashe          #+#    #+#             */
/*   Updated: 2022/11/04 14:06:02 by jergashe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
int		ft_print_char(char ch);
int		ft_print_str(char *str);
int		ft_print_hex(unsigned int hex, char x_specifier);
int		ft_print_dec(long number);
int		ft_print_address(unsigned long long address);
int		ft_print_unsigned(unsigned int number);
int		ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(long n, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		get_len_num(long number);
int		get_len_hex(unsigned long long hex);
void	ft_hex_in_action(unsigned long long hex, char x_specifier);

#endif