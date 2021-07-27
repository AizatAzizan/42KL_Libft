/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 22:33:12 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/23 15:50:06 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d_ptr;
	const char		*s_ptr;

	d_ptr = (char *)dst;
	s_ptr = (char *)src;
	if (src < dst)
	{
		len = len - 1;
		while ((int)len > -1)
		{
			*(d_ptr + len) = *(s_ptr + len);
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*d_ptr = *s_ptr;
			d_ptr++;
			s_ptr++;
			len--;
		}
	}
	return (dst);
}
