/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevisout <kevisout@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 08:37:34 by kevisout          #+#    #+#             */
/*   Updated: 2024-07-03 08:37:34 by kevisout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

/*
Wow, what's 'enum' ?
We use enums to avoid using magic numbers and macros.
It's a way to give a name to a set of values.
It just makes things easier to read and understand.
In this case for example, in t_lex, word = "ls" and token = WORD.
Instead of doing something like : word = "ls" and token = 1
I could write in comment 1 = WORD but it would be less understandable
in the rest of the code.
In the rest of the code we will be able to use this like :
if (t_lex->token == WORD)
	printf("It's a word !\n");
*/
typedef enum s_bool
{
	TRUE,
	FALSE,
	EVEN,
	EVEN_MSG,
	ODD_MSG,
	SUCCESS,
}	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);


#endif