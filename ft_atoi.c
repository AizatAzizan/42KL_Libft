/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazizan <mazizan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:06:57 by mazizan           #+#    #+#             */
/*   Updated: 2021/07/15 22:22:08 by mazizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	const char	*s_ptr;
	int			pos_neg;
	int			num;

	s_ptr = str;
	pos_neg = 1;
	num = 0;
	while (*s_ptr == ' ' || *s_ptr == '\n' || *s_ptr == '\t'
		|| *s_ptr == '\r' || *s_ptr == '\v' || *s_ptr == '\f')
		s_ptr++;
	if (*s_ptr == '+')
		s_ptr++;
	else if (*s_ptr == '-')
	{
		pos_neg *= -1;
		s_ptr++;
	}
	while (*s_ptr != '\0' && *s_ptr >= '0' && *s_ptr <= '9')
	{
		num = num * 10;
		num = num + (*s_ptr - '0');
		s_ptr++;
	}
	return (pos_neg * (num));
}
