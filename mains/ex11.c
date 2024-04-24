/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:56:15 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/24 11:01:01 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "../ex11/ft_div_mod.c"


void ex11(void)
{
	int a = 15;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a,b, &div, &mod);
	printf("EX11 - This is int a and b [%d][%d] this is the result and reminders[%d][%d]\n", a,b, div, mod );

}