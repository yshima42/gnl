/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimazu <yshimazu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:30:10 by yshimazu          #+#    #+#             */
/*   Updated: 2021/08/31 16:08:46 by yshimazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"

t_list	*ft_lstnew(int fd, char *c)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->fd = fd;
	elem->memo = ft_strndup(c, ft_strlen(c));
	elem->next = NULL;
	return (elem);
}

char	*ft_strndup(const char *src, size_t n)
{
	size_t	len;
	char	*ptr;

	len = 0;
	while (src[len])
		len++;
	ptr = (char *)malloc(n + 1);
	if (ptr == 0)
		return (0);
	len = 0;
	while (len < n)
	{
		ptr[len] = src[len];
		len++;
	}
	ptr[len] = 0;
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	strlen;

	strlen = 0;
	while (*s != 0)
	{
		s++;
		strlen++;
	}
	return (strlen);
}
