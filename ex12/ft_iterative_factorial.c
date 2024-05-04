/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <rpambo@student.42luanda.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:46:51 by rpambo            #+#    #+#             */
/*   Updated: 2024/05/04 13:51:26 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resul;

	resul = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb >= 1)
	{
		resul = nb * resul;
		nb--;
	}
}
