/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:36:16 by abdualsh          #+#    #+#             */
/*   Updated: 2025/07/14 17:49:25 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	x;
	char	*ab;

	ab = (char *)b;
	x = 0;
	while (x < len)
	{
		ab[x] = c;
		x++;
	}
	return (b);
}
