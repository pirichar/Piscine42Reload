/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:53:10 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/24 11:01:09 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex10/ft_swap.c"


void ex10(void)
{
	int pointee = 4;
	int pointee2 = 10;
	int *pointer = &pointee;
	int *pointer2 = &pointee2;

	printf("EX10 - This is whats inside pointer and pointer 2 before [%d][%d] ", *pointer, *pointer2 );
	ft_swap(pointer, pointer2);
	printf("and this is whats inside pointer after [%d][%d]\n", *pointer, *pointer2 );
}
