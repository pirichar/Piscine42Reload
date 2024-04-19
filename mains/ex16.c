/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex16.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:46:58 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/19 15:05:03 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex16/ft_strlen.c"
#include <stdio.h>

void ex16(void)
{
	char* str = "Four";
	printf("EX16 - This is what whe are passing %s and here its string lenght %d\n", str, ft_strlen(str));
}