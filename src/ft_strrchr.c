/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:54:42 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 20:01:21 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	d;

	i = 0;
	d = (unsigned char)c;
	while (str[i])
		i++;
	while (d != str[i] && i != 0)
	{
		i--;
	}
	if (d == str[i])
		return ((char *)(&str[i]));
	else
		return (0);
}
