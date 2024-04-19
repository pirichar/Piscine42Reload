/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex15.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:40:22 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/19 14:55:40 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex15/ft_putstr.c"


void ex15(void)
{
	char* str = "StringToWrite";
	printf("EX15 - This is the string we want to type [%s] and here is our restult [", str);
	fflush(stdout);  // Flush the buffer to ensure all printf content is output before write is called
    ft_putstr(str);
	printf("]\n");
}