/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex23.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:49:21 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/22 10:51:12 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../ex23/ft_point.h"
#include <stdio.h>
#include <string.h>


void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

void ex23(void)
 {
	t_point   point;
	set_point(&point);
	printf("EX23 -  This is x [%d] and this is y [%d]\n", point.x, point.y);
}