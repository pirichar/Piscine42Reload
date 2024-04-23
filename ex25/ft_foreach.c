/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:05:37 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/23 10:22:57 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief It should be a good idea to implement a kind of 
			security mechanism for this function but its not asked
			For now we loop for as many time as lenght
 * 
 * @param tab array of int to apply the function to
 * @param length number of repetition
 * @param f function applied to each element of the array
 */
 
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	while (length-- > 0)
	{
		f(*tab++);
	}
}
