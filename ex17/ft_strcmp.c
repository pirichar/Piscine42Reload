/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:56:59 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/19 15:12:26 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Compare characters and ensure neither is the null terminator
		Return the difference of the current characters, handling different string lengths
 * 
 * @param s1 
 * @param s2 
 * @return int 
 */
int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}