/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 22:49:30 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/27 22:43:14 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c_ptr;

	c_ptr = malloc(count * size);
	if (c_ptr == NULL)
		return (NULL);
	ft_memset(c_ptr, 0, count * size);
	return (c_ptr);
}
