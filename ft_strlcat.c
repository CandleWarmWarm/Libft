/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomjaip <nsomjaip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:14:07 by nsomjaip          #+#    #+#             */
/*   Updated: 2026/08/24 16:47:01 by nsomjaip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	slen;
	int	dlen;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	while (src[i] && i < (size - dlen - 1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (ft_strlen(dst));
}
