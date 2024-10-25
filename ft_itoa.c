/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:16:54 by itsiros           #+#    #+#             */
/*   Updated: 2024/10/25 15:06:02 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ilen(long num)
{
	int	ilen;

	ilen = 0;
	if (num < 0)
	{
		ilen++;
		num = -num;
	}
	if (num == 0)
		ilen++;
	while (num != 0)
	{
		num /= 10;
		ilen++;
	}
	return (ilen);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = n;
	len = ft_ilen(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		str[len - 1] = (num % 10) + 48;
		num /= 10;
		len--;
	}
	return (str);
}
