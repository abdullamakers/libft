/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 07:42:16 by abdualsh          #+#    #+#             */
/*   Updated: 2025/10/17 09:53:01 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_dan;
	size_t	src_len;

	src_len = 0;
	src_dan = 0;
	while (src[src_len])
		src_len++;
	if (dstsize == 0)
		return (src_len);
	while (src[src_dan] && (dstsize - 1 > src_dan))
	{
		dst[src_dan] = src[src_dan];
		src_dan++;
	}
	if (dst[src_dan] != '\0')
		dst[src_dan] = '\0';
	return (src_len);
}
