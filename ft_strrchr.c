/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 21:18:46 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/13 21:37:47 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_ptr;
	const char	*s_ptr2;
	int			b_flag;

	s_ptr = s;
	b_flag = 0;
	while (*s_ptr != '\0')
	{
		if (*s_ptr == c)
		{
			s_ptr2 = s_ptr;
			s_ptr++;
			b_flag += 1;
		}
		else
			s_ptr++;
	}
	if (!b_flag)
		return (NULL);
	return ((char *)s_ptr2);
}
