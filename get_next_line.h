/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 23:58:12 by jukim             #+#    #+#             */
/*   Updated: 2018/04/01 23:10:45 by jukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 8

/*
** buffer size has 8mb limit
*/

# include <fcntl.h>
# include "./libft/libft.h"

int	get_next_line(const int fd, char **line);
int	get_line(int fd, char **data, char **line);

#endif
