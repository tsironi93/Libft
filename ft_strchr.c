/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:50:54 by itsiros           #+#    #+#             */
/*   Updated: 2024/10/22 19:17:40 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	int_to_char;
	size_t	i;

	i = 0;
	str = (char *)s;
	int_to_char = c;
	while (s[i])
	{
		if (str[i] == int_to_char)
			return (str + i);
		i++;
	}
	if (s[i] == '\0' && int_to_char == '\0')
		return (str + i);
	return (NULL);
}
