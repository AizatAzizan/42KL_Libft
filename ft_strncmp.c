/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 21:43:18 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/14 22:52:53 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*s_ptr;
	const char	*s_ptr2;

	s_ptr = s1;
	s_ptr2 = s2;
	if (n == 0)
		return (0);
	while ((n) && (*s_ptr == *s_ptr2) && *s_ptr != '\0')
	{
		s_ptr++;
		s_ptr2++;
		n--;
	}
	return (*(unsigned char *)s_ptr - *(unsigned char *)s_ptr2);
}
