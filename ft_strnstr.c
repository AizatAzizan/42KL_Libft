/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 23:42:11 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/15 10:05:05 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ind;
	size_t	ind2;

	if (*needle == '\0')
		return ((char *)haystack);
	ind = 0;
	while (haystack[ind] != '\0' && len > 0)
	{
		ind2 = 0;
		while (needle[ind2] != '\0' && haystack[ind + ind2] == needle[ind2]
			&& ind + ind2 < len)
		{
			ind2++;
		}
		if (needle[ind2] == '\0')
			return ((char *)haystack + ind);
		ind++;
	}
	return (NULL);
}
