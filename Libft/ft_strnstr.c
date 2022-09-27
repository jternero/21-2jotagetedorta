/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:21:39 by jternero          #+#    #+#             */
/*   Updated: 2022/09/27 18:38:33 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		lenght;
	char	*large;
	char	*small;

	large = (char *)big;
	small = (char *)little;
	i = 0;
	lenght = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*large != '\0' && *small != '\0' && i++ <= len)
	{
		if (*large == *small)
		{
			while ((*(large + lenght) == *(small + lenght)) && i++ <= len)
			{
				if (*(small + lenght + 1) == '\0')
					return ((char *)large);
				lenght++;
			}
		}
		large++;
	}
	return (NULL);
}
