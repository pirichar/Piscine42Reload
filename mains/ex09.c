/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:47:07 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/24 10:52:37 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "../ex09/ft_ft.c"


void ex09(void)
{
	int pointee = 4;
	int *pointer = &pointee;
	printf("]\nEX09 - This is whats inside pointer before [%d] ", *pointer );
	ft_ft(pointer);
	printf("and this is whats inside pointer after [%d]\n", *pointer );
}
