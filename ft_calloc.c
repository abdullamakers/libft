/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:54:14 by abdualsh          #+#    #+#             */
/*   Updated: 2025/07/15 12:01:54 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	totalbytes;

	if (size != 0 && count > UINT32_MAX / size)
		return (NULL);
	totalbytes = size * count;
	ptr = (void *)malloc(totalbytes);
	if (ptr != NULL)
		ft_bzero(ptr, totalbytes);
	return (ptr);
}
