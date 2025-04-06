/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:12:10 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 21:30:40 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	verif_format(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X'
		|| c == '%')
		return (1);
	return (0);
}

int	print_format(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (c == '%')
		count = ft_putchar('%');
	else if (c == 'i' || c == 'd')
		count = ft_printnbr(va_arg(args, int));
	else if (c == 'u')
		count = ft_printunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
	else if (c == 'X')
		count = ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
	else if (c == 'p')
		count = ft_printptr(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		nb_char;
	int		i;
	va_list	args;

	va_start(args, format);
	i = 0;
	nb_char = 0;
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			ft_putchar(format[i++]);
			nb_char++;
		}
		if (format[i] == '%' && verif_format(format[i + 1]))
		{
			i++;
			nb_char = nb_char + print_format(format[i++], args);
		}
		else if (format[i])
			i++;
	}
	va_end(args);
	return (nb_char);
}
