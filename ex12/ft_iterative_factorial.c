/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:56:55 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/19 14:04:14 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 	Iterative way of doing factorial, from the number to 1 ,
			we managed the edge cases first
 * 
 * @param nb to be factored
 * @return int factorial nb
 */

int	ft_iterative_factorial(int nb)
{
	int	rtn;
	int	i;
	int	nb_copy;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	nb_copy = nb;
	rtn = nb;
	while (i < nb_copy)
	{
		rtn = rtn * (nb - 1);
		nb--;
		i++;
	}
	return (rtn);
}
