/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex12_ex13_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:41:16 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/19 14:50:04 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex12/ft_iterative_factorial.c"
#include "../ex13/ft_recursive_factorial.c"

void ex12_ex13(void)
{
	int num = 0;
	int rtn;
	int rtn1;

	rtn = ft_iterative_factorial(num);
	rtn1 = ft_recursive_factorial(num);
	printf("EX12 - this is the iterative factorial of %d = [%d]\n",num, rtn);
	printf("EX13 - this is the recursive factorial of %d = [%d]\n",num, rtn1);
}