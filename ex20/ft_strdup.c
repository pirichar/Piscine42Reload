/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 09:20:51 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/22 09:52:39 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strleno(const char *str)
{
	int	rtn;

	rtn = 0;
	while (str[rtn])
		rtn++;
	return (rtn);
}

/**
 * @brief Take a const string to copy, will copy if str is not null 
 			allways null terminate and return NULL if not s1 or *s1
 * 
 * @param s1 
 * @return char* 
 */
char	*ft_strdup(const char *s1)
{
	char	*rtn_str;
	int		i;

	if (s1 && *s1)
	{
		i = 0;
		rtn_str = malloc(sizeof(char *) * ft_strleno(s1) + 1);
		if (rtn_str == NULL)
			return (NULL);
		while (*s1)
			rtn_str[i++] = *s1++;
		rtn_str[i] = '\0';
		return (rtn_str);
	}
	return (NULL);
}
