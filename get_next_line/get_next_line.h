/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassamer <eassamer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:32:50 by eassamer          #+#    #+#             */
/*   Updated: 2022/02/19 09:28:19 by eassamer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<fcntl.h>
# include<unistd.h>
# include<sys/types.h>
# include<sys/syscall.h>

char	*ft_strjoin_gnl(char *s1, char *s2);
size_t	ft_strlen_gnl(char *str);
char	*ft_strchr_gnl(char *s, int c);
char	*ft_read(char *text, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_just_a_line(char *text);
char	*get_next_line(int fd);
char	*ft_change_text(char *text);

#endif
