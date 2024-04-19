/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:31:53 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/18 15:32:31 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int		alphabet;
	int		i;
	char	to_print;

	to_print = 'a';
	alphabet = 26;
	i = 0;
	while (i < alphabet)
	{
		ft_putchar(to_print++);
		i++;
	}
}
