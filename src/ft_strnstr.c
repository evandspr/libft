/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:47:24 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 19:59:49 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int		i;
	int					j;
	int					len_little;

	len_little = 0;
	while (little[len_little])
		len_little++;
	if (len_little == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && len > i)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && i + j < len)
			j++;
		if (j == len_little)
			return ((char *) big + i);
		i++;
	}
	return (0);
}
