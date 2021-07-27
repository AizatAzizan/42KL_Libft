/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 19:51:44 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/13 21:40:05 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*s_ptr;

	s_ptr = s;
	while (*s_ptr != '\0')
	{
		if (*s_ptr == c)
			return ((char *)s_ptr);
		s_ptr++;
	}
	return (NULL);
}
