/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:11:22 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 20:11:16 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(num * size);
	if (!dest)
		return (0);
	while (i < num * size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
