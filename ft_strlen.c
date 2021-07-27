/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:18:29 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/13 20:15:33 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*s_ptr;
	size_t		ctr;

	s_ptr = s;
	ctr = 0;
	while (*s_ptr != '\0')
	{
		s_ptr++;
		ctr++;
	}
	return (ctr);
}
