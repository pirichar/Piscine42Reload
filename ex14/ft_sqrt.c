/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:07:56 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/19 14:27:56 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief first manage exceptions, then starting from one
			loop over the availables numbers 
			if you overpass the number by multiplying rtn by itself 
			we thencheck if we found or not a square number
 * 
 * @param nb to be checked
 * @return squared root or 0
 */

int	ft_sqrt(int nb)
{
	int	rtn;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	rtn = 1;
	while (rtn * rtn < nb)
		rtn++;
	if (rtn * rtn == nb)
		return (rtn);
	return (0);
}
