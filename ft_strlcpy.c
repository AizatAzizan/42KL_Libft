/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:35:37 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/13 20:15:27 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	ind;

	ind = 0;
	if (dstsize > 0)
	{
		while (ind < (dstsize - 1) && src[ind] != '\0')
		{
			dst[ind] = src[ind];
			ind++;
		}
		dst[ind] = '\0';
	}
	return (ft_strlen(src));
}
