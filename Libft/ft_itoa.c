/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:48:08 by jternero          #+#    #+#             */
/*   Updated: 2022/10/03 19:10:29 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_stock(size_t n, char *str, int *i)
{
	if (n > 9)
	{
		ft_putnbr_stock(n / 10, str, i);
		ft_putnbr_stock(n % 10, str, i);
	}
	else
		str[(*i)++] = n + 48;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
	}
	ft_putnbr_stock(n, str, &i);
	str[i] = '\0';
	return (str);
}
