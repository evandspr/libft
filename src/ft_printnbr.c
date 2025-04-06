/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:43:57 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 21:30:27 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft_printf.h"

void	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		i = i + ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n <= 9)
	{
		i = i + ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	len_int(int n)
{
	int	count;

	count = 0;
	if (n < 10 && n >= 0)
	{
		count++;
		return (count);
	}
	while (n > 0 || n < 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	power(int n)
{
	int	i;
	int	pow;

	i = 0;
	pow = 1;
	if (len_int(n) > 1)
	{
		while (i != len_int(n) - 1)
		{
			pow = pow * 10;
			i++;
		}
	}
	return (pow);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		lenint;
	int		powe;
	int		i;

	lenint = len_int(n) + (n < 0);
	powe = power(n);
	ret = malloc(sizeof(char) * (lenint + 1));
	if (!ret)
		return (0);
	i = 0;
	if (n < 0)
		ret[i++] = '-';
	while (powe > 0)
	{
		ret[i++] = ((n / powe) % 10) * (1 - 2 * (n < 0)) + '0';
		powe /= 10;
	}
	ret[i] = '\0';
	return (ret);
}

int	ft_printnbr(int nb)
{
	char	*num;
	int		i;

	num = ft_itoa(nb);
	ft_putnbr(nb);
	i = ft_strlen(num);
	if (num)
		free(num);
	return (i);
}
