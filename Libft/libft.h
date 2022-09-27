/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:06:00 by jternero          #+#    #+#             */
/*   Updated: 2022/09/27 20:51:54 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
//This function tells if int c is an alphabetic character
int		ft_isalpha(int c);
//this function tells if int c is an numeric Character
int		ft_isdigit(int c);
// this function tells if int c it included on ASCII table
int		ft_isascii(int c);
//this function tells if the int is an alphanumeric character
int		ft_isalnum(int c);
//this function tells if the int c is a printable character.
int		ft_isprint(int c);
//This functions return the length of the *s
size_t	ft_strlen(const char *s);
//This function changes the value of pointer to the selected char
void	*ft_memset(void *b, int c, size_t len);
//This function changes the value of pointer s into NULL
void	ft_bzero(void *s, size_t n);
//This function copies n characters from memory area src to memory area dest.
void	*ft_memcpy(void *dst, const void *src, size_t n);
//This function move a pointer value to another pointer
// without overlaping its value
void	*ft_memmove(void *dst, const void *src, size_t len);
//This Function will return the lenght of src.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
//This function will return the lenght of 
//the initial length of dst plus the length of src. 
size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize);
//This function changes a lowcase letter into uppercase letter
int		ft_toupper(int c);
//This function changes a uppercase letter into lowercase letter
int		ft_tolower(int c);
// This function compares at most the first n bytes of str1 and str2.
//... if Return value < 0 then it indicates str1 is less than str2.
//... if Return value > 0 then it indicates str2 is less than str1.
//... if Return value = 0 then it indicates str1 is equal to str2.
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//This function locates the last occurrence of c 
//(converted to a char) in the string pointed to by s.
// The terminating null character is considered to be part of the string.
//A pointer to the located character, 
//or NULL if the character doesn't occur in the string.
char	*ft_strrchr(const char *str, int c);
//The strchr() function finds the first occurrence of c (converted to a char)
// in the string pointed to by s. 
//The terminating NUL character is considered to be part of the string.
char	*ft_strchr(const char *str, int c);
//This function returns a pointer to the matching byte or NULL
//if the character does not occur in the given memory area.
char	*ft_memchr(const void *s, int c, size_t n);
//if Return value < 0 then it indicates str1 is less than str2.
//if Return value > 0 then it indicates str2 is less than str1.
//if Return value = 0 then it indicates str1 is equal to str2.
int		ft_memcmp(const void *str1, const void *str2, size_t n);
//If needle is an empty string, haystack is returned;
//if needle occurs nowhere in haystack, NULL is returned; 
//otherwise a pointer to the first character 
//of the first occurrence of needle is returned.
char	*ft_strnstr(const char *bigone, const char *littleone, size_t len);
//covert string to integer
int		ft_atoi(const char *str);

#endif
