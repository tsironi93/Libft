/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:18:02 by itsiros           #+#    #+#             */
/*   Updated: 2024/10/26 18:27:51 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (ft_strncmp)
		{
			//printf ("%d\n", i);
			return (1);
		}
		i++;
		// else
		// 	return (0);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		j;
	char	*str;

	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	i = 0;
	while (ft_trim(set, s1[i]))
		i++;
	while (ft_trim(set, s1[len]))
		len--;
	if (len <= 0 || i >= len)
		return (ft_strdup(""));
	len -= i + 1;
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (i < len)
		str[j++] = s1[i++];
	return (str);
}
// int main ()
// {
// 	char str[] = "\n\\hellogianni\n\n\n";
// 	printf ("%s\n", ft_strtrim(str, "\n"));
// 	return (0);
// }