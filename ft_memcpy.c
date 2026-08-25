/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomjaip <nsomjaip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 17:16:34 by nsomjaip          #+#    #+#             */
/*   Updated: 2026/08/25 17:16:34 by nsomjaip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	i = 0;
	dest = dst;
	source = src;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
