/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex19.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:16:38 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/23 10:19:46 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


void ex19(void)
{
	printf("EX19 - Will SORT out the 3 params test3 test2 test1\n");
	fflush(stdout);  // Flush the buffer to ensure all printf content is output before write is called
	system("./sort_params test3 test2 test1");
}