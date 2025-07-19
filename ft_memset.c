/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:36:16 by abdualsh          #+#    #+#             */
/*   Updated: 2025/07/19 16:28:40 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int src, size_t len)
{
	unsigned char	*dst_cpy;

	dst_cpy = (unsigned char *)dst;
	while (len--)
		*dst_cpy++ = (unsigned char)src;
	return (dst);
}
