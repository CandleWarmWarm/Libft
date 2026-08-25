/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsomjaip <nsomjaip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:42:18 by nsomjaip          #+#    #+#             */
/*   Updated: 2026/08/25 14:42:18 by nsomjaip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little == NULL)
		return (big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		
		while (i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (&big[i]);
		i++;
	}
	return (NULL);
}