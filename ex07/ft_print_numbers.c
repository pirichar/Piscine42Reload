/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:34:45 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/18 15:36:47 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		nine;
	int		i;
	char	to_print;

	to_print = '0';
	nine = 9;
	i = 0;
	while (i <= nine)
	{
		ft_putchar(to_print++);
		i++;
	}
}
