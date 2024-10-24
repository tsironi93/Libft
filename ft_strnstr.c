/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:31:32 by itsiros           #+#    #+#             */
/*   Updated: 2024/10/22 17:37:02 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hstck;
	char	*ndl;
	size_t	i;
	size_t	j;

	hstck = (char *)haystack;
	ndl = (char *)needle;
	i = 0;
	if (ndl[i] == '\0' || ndl == NULL)
		return (hstck);
	while (hstck[i] && i < len)
	{
		j = 0;
		while (hstck[i + j] == ndl[j] && i + j < len)
		{
			if (ndl[j + 1] == '\0')
				return (hstck + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
