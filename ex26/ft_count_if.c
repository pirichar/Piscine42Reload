/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:22:06 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/23 10:24:25 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Function will increment rtn if the return of the function is one
 * 
 * @param tab array of string what will use the function, a function which takes
 * @param f a function which takes a string as an input and returns an int
 * @return int the increment of rtn
 */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	rtn;
	int	i;

	rtn = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			rtn++;
		}
		i++;
	}
	return (rtn);
}
