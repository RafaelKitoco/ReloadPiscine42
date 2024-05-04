/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpambo <rpambo@student.42luanda.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:58:39 by rpambo            #+#    #+#             */
/*   Updated: 2024/05/04 14:10:45 by rpambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	resul;

	resul = 1;
	while (resul * resul <= nb)
	{
		if (resul * resul == nb)
		{
			return (resul);
		}
		if (nb > 46340)
		{
			return (0);
		}
		resul++;
	}
}
