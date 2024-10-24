/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:56:04 by itsiros           #+#    #+#             */
/*   Updated: 2024/10/21 15:50:35 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(char *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	val;

	i = 0;
	p = (unsigned char *)ptr;
	val = (unsigned char)value;
	while (i < num)
	{
		ptr[i] = val;
		i++;
	}
	return (ptr);
}
