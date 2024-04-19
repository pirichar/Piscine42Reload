/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex17.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:00:15 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/19 15:03:43 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex17/ft_strcmp.c"
#include <stdio.h>
#include <string.h>

void ex17()
{
	char* str = "StringToCompare";
	char* NotTheSame = "NotTheSame";

	printf("EX17 - This is %s with %sn with our strcmp = [%d]\n", str, str, ft_strcmp(str, str));
	printf("EX17 - This is %s with %sn with the proper strcmp = [%d]\n", str, str, strcmp(str, str));

	printf("EX17 - This is %s with %sn with our strcmp = [%d]\n", str, NotTheSame, ft_strcmp(str, NotTheSame));
	printf("EX17 - This is %s with %sn with the proper strcmp = [%d]\n", str, NotTheSame, strcmp(str, NotTheSame));
}