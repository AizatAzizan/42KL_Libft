/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:17:36 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/23 00:09:55 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d_ptr;
	const char		*s_ptr;

	d_ptr = (char *)dst;
	s_ptr = (char *)src;
	if (src == 0 && dst == 0)
		return (dst);
	while (n > 0)
	{
		*d_ptr = *s_ptr;
		d_ptr++;
		s_ptr++;
		n--;
	}
	return (dst);
}
