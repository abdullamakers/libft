/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdualsh <abdualsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:46:02 by abdualsh          #+#    #+#             */
/*   Updated: 2025/07/15 11:50:19 by abdualsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	unsigned int	i;
	long			sign;
	long			result;

	i = 0;
	sign = 1;
	result = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result >= LONG_MAX / 10 && sign == 1)
			return (-1);
		else if (result >= LONG_MAX / 10 && sign == -1)
			return (0);
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return ((int)result * sign);
}
