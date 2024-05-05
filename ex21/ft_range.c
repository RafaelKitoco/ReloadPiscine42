/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <rpambo@student.42luanda.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:26:54 by rpambo            #+#    #+#             */
/*   Updated: 2024/05/04 17:33:14 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
