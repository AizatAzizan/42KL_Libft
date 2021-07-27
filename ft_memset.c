/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:48:54 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/16 11:20:33 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uc_b;

	uc_b = (unsigned char *)b;
	while (len > 0)
	{
		*uc_b = (unsigned char)c;
		uc_b++;
		len--;
	}
	return (uc_b);
}
