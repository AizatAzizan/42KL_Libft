/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:49:34 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/27 15:14:09 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s_ptr;
	size_t	s_len;
	size_t	ind;

	s_len = ft_strlen(s1);
	ind = 0;
	s_ptr = malloc(sizeof(s_ptr) * s_len + 1);
	if (s_ptr == NULL)
		return (NULL);
	while (s1[ind] != '\0')
	{
		s_ptr[ind] = s1[ind];
		ind++;
	}
	s_ptr[ind] = '\0';
	return (s_ptr);
}
