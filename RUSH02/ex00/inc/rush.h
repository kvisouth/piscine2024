/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-13 09:44:36 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-13 09:44:36 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

/*
Authorized functions : write, malloc, free, open, read, close
*/
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# define DICTNAME "english.dict"
# define GROUP_SIZE 3
# define ERRMSG "Error\n"
# define ERRDICT "Dict Error\n"

typedef struct s_buffer {
	char	*buffer;
	int		free_space;
	int		total_space;
}	t_buffer;

typedef struct s_nbr {
	char		*nbr;
	int			nbr_len;
	char		**tab;
	int			tab_len;
	int			nb_groups;
	int			rest;
	t_buffer	buffer;
}	t_nbr;

char	*ft_atoa(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_read_file(char *filename, t_nbr *nbr);
int		ft_group(t_nbr *nbr, int start, int end, int *digit_written);
int		ft_write_nb(t_nbr *nbr, int index);
int		ft_fill_buffer(char *str, t_buffer *buffer, int raw);
char	*ft_trim_leading(char *str);
void	ft_trim_trailling(char *str, char c);
int		ft_strstr(char **src, char *to_find);
int		ft_perror(char *str, int n);
int		ft_strchr(char *str, char c);
char	*ft_strdup(char *str);
int		main_loop(t_nbr *nbr);

#endif
