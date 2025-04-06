/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:49:36 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 21:29:59 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i + 1] != '\0')
	{
		j = i +1;
		while (base[j])
		{
			if (base[i] == base [j] || base[i] == '+' || base[i] == '-'
				|| base[j] == '+' || base[j] == '-' || base[i] <= ' '
				|| base [i] > 126 || base[j] <= ' ' || base[j] > 126)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	long int	nb;
	int			count;

	nb = nbr;
	count = 0;
	if (nbr == 0)
		return (ft_putchar(base[0]));
	nb = (long int)nbr;
	if (!base_check(base))
		return (0);
	if (nb != 0)
	{
		if (nb / ft_strlen(base) != 0)
			count += ft_putnbr_base(nb / ft_strlen(base), base);
		count += ft_putchar(base[nb % ft_strlen(base)]);
	}
	return (count);
}
