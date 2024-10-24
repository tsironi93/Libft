/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:39:59 by itsiros           #+#    #+#             */
/*   Updated: 2024/10/16 00:56:44 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>

int		ft_isalpha(int x);
int		ft_isalnum(int x);
int		ft_isascii(int x);
int		ft_isdigit(int i);
int		ft_isprint(int x);
void	*ft_memset(char *ptr, int value, size_t num);
int		ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dst, const void *src, size_t len);

#endif