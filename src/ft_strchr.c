/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:41:47 by edesprez          #+#    #+#             */
/*   Updated: 2024/11/21 15:28:52 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	d;

	d = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == d)
			return ((char *)(&str[i]));
		i++;
	}
	if (!d)
		return ((char *)(&str[i]));
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%s", ft_strchr("Bonjour comment allez vous", ' '));
	printf("%s", "\n");
	printf("%s", strchr("teste", 'e'+256));

}*/
