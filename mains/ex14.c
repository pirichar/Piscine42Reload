/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex14.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:10:04 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/19 14:50:36 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex14/ft_sqrt.c"
#include <stdio.h>

void ex14(void)
{
	int sqaure_rootable = 16;
	int non_squarable = 15;
	int zero = 0;
	int one = 1;

	printf("EX14 - This is the return of %d = %d\n", sqaure_rootable, ft_sqrt(sqaure_rootable));
	printf("EX14 - This is the return of %d = %d\n", non_squarable, ft_sqrt(non_squarable));
	printf("EX14 - This is the return of %d = %d\n", zero, ft_sqrt(zero));
	printf("EX14 - This is the return of %d = %d\n", one, ft_sqrt(one));
}