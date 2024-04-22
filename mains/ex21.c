/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex21.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:04:24 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/22 10:19:51 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ex21/ft_range.c"
#include <stdio.h>
#include <string.h>


void ex21(void)
{
	int min = 10;
	int max = 16;

	int* range = ft_range(min, max);
	int n = (max - min) + 1;
	printf("EX21 - this is the size of the array = [%d]\n",n);
	int i = 0;
	while(n-- > 0)
	{
		printf("EX21 - This is range at position %d [%d]\n", i, range[i]);
		i++;
	}

}