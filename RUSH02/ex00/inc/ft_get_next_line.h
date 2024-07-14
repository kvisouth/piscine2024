/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-14 11:42:09 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-14 11:42:09 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# define BUFFER_SIZE 8192

typedef struct s_data
{
	int	tmp;
	int	bread;
	int	free_space;
	int	total_size;
}	t_data;

int		ft_strcat(char *str, char *str1);
void	*ft_realloc(char **str, unsigned int size);
int		ft_check_endl(char *str);

char	*ft_get_next_line(int fd, char **lines);

#endif // FT_GET_NEXT_LINE_H