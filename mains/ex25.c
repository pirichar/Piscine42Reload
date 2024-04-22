/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex25.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:11:17 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/22 11:21:10 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex25/ft_foreach.c"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchari(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nb) {
	if (nb < 0) {
		ft_putchari('-');
		nb = -nb;
	}
	if (nb >= 10) {
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) ft_putchari(nb + 48);
}

void ex25(void)
{
	int to_print[]  = {0,1,2,3,4,5,6,7,8,9};
	printf("EX25 - We should print from 0 to 9 with this = [");
	fflush(stdout);  // Flush the buffer to ensure all printf content is output before write is called
	ft_foreach(to_print, 10, &ft_putnbr);
	printf("]\n");
}