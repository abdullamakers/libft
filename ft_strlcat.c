/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:01:42 by abdualsh          #+#    #+#             */
/*   Updated: 2025/10/24 12:56:32 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	while (dst[d_len] && d_len < dstsize)
		d_len++;
	s_len = ft_strlen(src);
	i = 0;
	while (src[i] && (d_len + i + 1 < dstsize))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len < dstsize)
		dst[d_len + i] = '\0';
	return (d_len + s_len);
}
