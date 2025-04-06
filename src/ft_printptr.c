/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:33:39 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 21:34:28 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_baseptr(uintptr_t nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (ft_putchar(base[0]));
	if (!base_check(base))
		return (0);
	if (nbr != 0)
	{
		if (nbr / ft_strlen(base) != 0)
			count += ft_putnbr_baseptr(nbr / ft_strlen(base), base);
		count += ft_putchar(base[nbr % ft_strlen(base)]);
	}
	return (count);
}

int	ft_printptr(void *ptr)
{
	int			count;
	uintptr_t	fullptr;

	fullptr = (uintptr_t)ptr;
	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putnbr_baseptr(fullptr, "0123456789abcdef");
	return (count);
}
