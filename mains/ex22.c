/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex22.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:38:33 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/22 10:41:11 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex22/ft_abs.h"
#include <stdio.h>
#include <string.h>



void ex22(void)
{
	int positive = 10;
	int negative = -10;

	printf("EX22 - This is my positive int printed as aboslute [%d]\n", ABS(positive));
	printf("EX22 - This is my negative int printed as aboslute [%d]\n", ABS(negative));
}