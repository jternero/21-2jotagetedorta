/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:06:00 by jternero          #+#    #+#             */
/*   Updated: 2022/09/23 20:04:22 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
//This function changes the value of pointer to the selected char
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
//This function move a pointer value to another pointer
// without overlaping its value
void	*ft_memmove(void *dst, const void *src, size_t len);
//This Function will return the lenght of src.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
//This function will return the lenght of 
//the initial length of dst plus the length of src. 
size_t	ft_strcat(char	*dst, const char *src, size_t dstsize);

#endif