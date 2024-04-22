/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 08:47:46 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/22 09:18:09 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
	ft_putchar('\n');
}

/**
 * @brief The strcmp() function return an integer 
 	greater than, equal to, or less than 0,
	according as the string s1 is
	greater than, equal to, or less than the string s2.
	The comparison is done using unsigned characters,
	so that ‘\200’ is greater than ‘\0’.
 * 
 * 
 * @param s1 to compare1
 * @param s2 to compare2
 * @return int greater than, equal to, or less than the string s2.
 */
int	ft_strcmp(char *s1, char *s2)
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

/**
 * @brief // s1 is greater then s2 replace s2 by s1,
 			 reset I to 0 to loop over again
			// s1 is smaller or equal to s2 do nothing it goes first
 * 
 * @param argv 
 */
void	ft_sort_params(char **argv)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (argv[i] && argv[i + 1])
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 0;
		}
		else if (ft_strcmp(argv[i], argv[i + 1]) <= 0)
			i++;
	}
	i = 1;
	while (argv[i])
		ft_putstr(argv[i++]);
}

/**
 * @brief Passing a copy of agrv to sort params so it does the job
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argv);
		return (0);
	}
	else
		return (1);
}
