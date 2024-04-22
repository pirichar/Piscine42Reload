/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex20.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:29:48 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/22 09:37:11 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex20/ft_strdup.c"
#include <stdio.h>
#include <string.h>


void ex20(void)
{
	char* test = "Test\0";
	char *test2;

	test2 = ft_strdup(test);
	printf("EX20 - This is test = [%s]\nEX20 - this is test2 = [%s]\n",test,test2);
	free(test2);
}