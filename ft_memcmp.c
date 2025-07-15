/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:53:36 by abdualsh          #+#    #+#             */
/*   Updated: 2025/07/15 14:36:06 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	int				x;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	x = 0;
	while (n > 0)
	{
		if (ss1[x] != ss2[x])
			return (ss1[x] - ss2[x]);
		x++;
		n--;
	}
	return (0);
}
