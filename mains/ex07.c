/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:41:19 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/24 10:43:31 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex07/ft_print_numbers.c"


void ex07(void)
{
	printf("]\nEX07 - Will print numbers from 0 to 9 [");
	fflush(stdout);  // Flush the buffer to ensure all printf content is output before write is called
	ft_print_numbers();
}
