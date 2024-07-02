/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-27 12:18:25 by kevisout          #+#    #+#             */
/*   Updated: 2024-06-27 12:18:25 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	write_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		y;
	char	*tmp;

	i = 1;
	if (argc <= 1)
		return (0);
	while (i < argc)
	{
		if (argv[i + 1] == NULL)
			break ;
		y = 0;
		while (argv[i][y] == argv[i + 1][y])
			y++;
		if (argv[i][y] > argv[i + 1][y])
		{
			tmp = argv[i];
			argv[i] = argv [i + 1];
			argv[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	write_args(argc, argv);
}
