/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 16:10:32 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/23 23:00:42 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc_c;
	unsigned char	*s_ptr;

	uc_c = (unsigned char)c;
	s_ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*s_ptr == uc_c)
			return (s_ptr);
		s_ptr++;
		n--;
	}
	return (NULL);
}
