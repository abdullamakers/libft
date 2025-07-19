/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:17:36 by abdualsh          #+#    #+#             */
/*   Updated: 2025/07/19 12:13:39 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*use_malloc(char const *s, size_t start, size_t full_len, size_t len)
{
	size_t	x;
	char	*pt;

	x = 0;
	if (full_len <= start)
	{
		pt = malloc(sizeof(char));
		if (pt == NULL)
			return (NULL);
		pt[0] = '\0';
		return (pt);
	}
	if ((start + len) > full_len)
		len = full_len - start;
	pt = malloc((len + 1) * sizeof(char));
	if (pt == NULL)
		return (NULL);
	while (x < len)
		pt[x] = s[start + x++];
	pt[x] = '\0';
	return (pt);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	full_len;
	size_t	start_t;

	if (s == NULL)
		return (NULL);
	full_len = 0;
	start_t = (size_t)start;
	while (s[full_len])
		full_len++;
	return (use_malloc(s, start_t, full_len, len));
}
