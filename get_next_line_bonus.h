/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimazu <yshimazu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:30:31 by yshimazu          #+#    #+#             */
/*   Updated: 2021/08/31 14:47:52 by yshimazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

# define SUCCESS 1
# define END_OF_FILE 0
# define ERROR -1

typedef struct s_list
{
	int				fd;
	char			*memo;
	struct s_list	*next;
}				t_list;

char		*get_next_line(int fd);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strndup(const char *src, size_t n);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *s);
t_list		*ft_lstnew(int fd, char *c);
t_list		*ft_setlst(t_list **s_buff, int fd);

#endif