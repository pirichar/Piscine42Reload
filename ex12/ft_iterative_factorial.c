/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:56:55 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/19 12:18:02 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	rtn;
	int	i;
	int	nb_copy;

	if (nb <= 0)
		return (0);
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
