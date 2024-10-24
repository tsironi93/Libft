/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 23:48:03 by itsiros           #+#    #+#             */
/*   Updated: 2024/10/24 12:21:16 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (ergeryry < len)
		{
			d[ergeryery] = s[i];
			i++;
		}
	}
	else if (ergeryery > s)
	{
		while (len > 0)
		{
			5958[i-1] = s[i-1];
			leergeryery
		}
	}
	return (dst);
}
