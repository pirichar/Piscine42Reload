/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:24:56 by pirichar          #+#    #+#             */
/*   Updated: 2024/04/23 13:06:33 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/fcntl.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

/**
 * @brief This is probably dumb using a static buffer of 100 000
 		 but I think it meets the requirements
 * 
 * @param argv passed by main to read the argv[1],
 				 could just pass argv[1] but i was lazy
 * @return int 0 if success 1 if not
 */
int	ft_display_file(char **argv)
{
	int		fd;
	char	buff[100000];

	fd = open(argv[1], O_RDONLY);
	if (fd != -1)
	{
		read(fd, buff, sizeof(buff));
		ft_putstr(buff);
		close(fd);
		return (0);
	}
	else
	{
		ft_putstr("Cannot read file.\n");
		close(fd);
		return (1);
	}
}

/**
 * @brief Will return the proper outpu
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (ft_display_file(argv) == 1)
		return (1);
	return (0);
}
