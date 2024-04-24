/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:43:18 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/24 10:46:45 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex08/ft_is_negative.c"


void ex08(void)
{
	printf("]\nEX08 - Will pass -42 to is negative [");
	fflush(stdout);  // Flush the buffer to ensure all printf content is output before write is called
	ft_is_negative(-42);
	printf("]\nEX08 - Will pass 0 to is negative [");
	fflush(stdout);  // Flush the buffer to ensure all printf content is output before write is called
	ft_is_negative(0);
	printf("]\nEX08 - Will pass 100 to is negative [");
	fflush(stdout);  // Flush the buffer to ensure all printf content is output before write is called
	ft_is_negative(100);
}
