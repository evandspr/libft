/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:55:52 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 21:30:56 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		verif_format(char c);
int		print_format(char c, va_list args);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_strlen(const char *str);
void	ft_putnbr(int n);
int		len_int(int n);
int		power(int n);
char	*ft_itoa(int n);
int		ft_printnbr(int nb);
void	ft_putunbr(unsigned int n);
int		len_uint(unsigned int n);
int		upower(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_printunbr(unsigned int nb);
int		base_check(char *base);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		ft_printptr(void *ptr);
int		ft_putnbr_baseptr(uintptr_t nbr, char *base);

#endif
