/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:00:41 by jternero          #+#    #+#             */
/*   Updated: 2022/09/27 12:44:19 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ppp;

	ppp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ppp[i] == (unsigned char)c)
		{
			return ((char *)&ppp[i]);
		}
		i++;
	}
	return (NULL);
}
