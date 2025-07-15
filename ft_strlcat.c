/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:01:42 by abdualsh          #+#    #+#             */
/*   Updated: 2025/07/15 10:28:37 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i] && i < dstsize)
		i++;
	while (src[src_len] && (i + src_len + 1) < dstsize)
	{
		dst[i + src_len] = src[src_len];
		src_len++;
	}
	if (i < dstsize)
		dst[i + src_len] = '\0';
	return (i + ft_strlen(src));
}
