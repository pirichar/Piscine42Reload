/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:53:08 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/22 10:20:32 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief //get the size to malloc
			//malloc
			//fill the array with numbers
			// starting from the min to the max

 * 
 * @param min 
 * @param max 
 * @return int* 
 */
int	*ft_range(int min, int max)
{
	int	*rtn;
	int	i;

	if (min >= max)
		return (NULL);
	i = max - min;
	rtn = malloc(sizeof(int) * i);
	if (rtn == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		rtn[i++] = min++;
	}
	rtn[i] = max;
	return (rtn);
}
