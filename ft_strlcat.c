/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 15:19:13 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/13 10:05:38 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*src_ptr;
	char		*dst_ptr;
	size_t		dlen;
	size_t		diff;

	diff = dstsize;
	src_ptr = src;
	dst_ptr = dst;
	while (diff-- != 0 && *dst_ptr != '\0' )
		dst_ptr++;
	dlen = dst_ptr - dst;
	diff = dstsize - dlen;
	if (!diff)
		return (dlen + ft_strlen(src));
	while (*src_ptr != '\0')
	{
		if (diff != 1)
		{
			*dst_ptr++ = *src_ptr;
			diff--;
		}
		src_ptr++;
	}
	*dst_ptr = '\0';
	return ((src_ptr - src) + dlen);
}
