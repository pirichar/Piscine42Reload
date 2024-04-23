/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex18.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:14:56 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/23 10:19:34 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


void ex18(void)
{
	printf("EX18 - Will print out the 3 params test3 test2 test1\n");
	fflush(stdout);  // Flush the buffer to ensure all printf content is output before write is called
	system("./print_params test3 test2 test1");
}