/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:46:22 by itsiros           #+#    #+#             */
/*   Updated: 2024/10/22 19:19:08 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	int_to_char;
	size_t	i;
	char	*result;

	str = (char *)s;
	int_to_char = c;
	i = 0;
	result = NULL;
	if (int_to_char == '\0')
		return (str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == int_to_char)
			result = &str[i];
		i++;
	}
	return (result);
}
