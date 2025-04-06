/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:54:01 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 19:56:49 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (i != count)
	{
		if (((unsigned char *)buf)[i] == (unsigned char)c)
			return ((void *)(buf + i));
		i++;
	}
	return (0);
}
