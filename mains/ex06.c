/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:37:26 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/24 10:41:02 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex06/ft_print_alphabet.c"


void ex06(void)
{
	printf("EX06 - Will print the alphabet [");
	fflush(stdout);  // Flush the buffer to ensure all printf content is output before write is called
	ft_print_alphabet();
}
