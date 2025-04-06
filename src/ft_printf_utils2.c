/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:21:24 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 21:29:19 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putunbr(unsigned int n)
{
	if (n == 0)
		write(1, "0", 1);
	else if (n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	len_uint(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n < 10 && n > 0)
	{
		count++;
		return (count);
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	upower(unsigned int n)
{
	unsigned int	i;
	unsigned int	pow;

	i = 0;
	pow = 1;
	if (len_uint(n) > 1)
	{
		while (i != (unsigned int)len_uint(n) - 1)
		{
			pow = pow * 10;
			i++;
		}
	}
	return (pow);
}

char	*ft_uitoa(unsigned int n)
{
	char			*ret;
	unsigned int	lenint;
	unsigned int	powe;
	unsigned int	i;

	lenint = len_uint(n) + (n <= 0);
	powe = upower(n);
	ret = malloc(sizeof(char) * (lenint + 1));
	if (!ret)
		return (0);
	i = 0;
	while (powe > 0)
	{
		ret[i++] = ((n / powe) % 10) * (1 - 2 * (n <= 0)) + '0';
		powe /= 10;
	}
	ret[i] = '\0';
	return (ret);
}

int	ft_printunbr(unsigned int nb)
{
	char			*num;
	unsigned int	i;

	num = ft_uitoa(nb);
	ft_putunbr(nb);
	i = ft_strlen(num);
	if (num)
		free(num);
	return (i);
}
