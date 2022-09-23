/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:11:19 by jternero          #+#    #+#             */
/*   Updated: 2022/09/23 21:38:02 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include <stdio.h>
#include <string.h>
/*
int main(void)
{
	char *c = "Luke, I'm your father";
	printf("%lu", ft_strlen(c));

}

int	main(void)
{
	char	str[50] = "YHLQMDLG";

	printf("%s\n", str);
	ft_memset(str, '$', 8);
	printf("%s", str);
}


int	main(void)
{
	int	ppp = 5;
		
	if (ft_isprint(ppp))
		printf("this is an printable character");
	else
		printf("this isnt an printable character");
}

int	main(void)
{
	int	ppp = '9';

	if (ft_isdigit(ppp))
		printf("%d\n", ppp);
}

int	main(void)
{
	int	ppp = 154;

	if (ft_isascii(ppp))
		printf("This is an ASCII character \n");
	else
		printf("This isnt an ASCII character \n");
}

int	main(void)
{
	int	ppp = 91;

	if (ft_isalpha(ppp))
		printf("This is an alphabetic character\n");
	else
		printf("This isnt an alphabetic character\n");
}

int	main(void)
{
	int	ppp = 85;

	if (ft_isalnum(ppp) == 1)
		printf("%d", ppp);
}




int	main(void)
{
	const char	src[50] = "May the Force be with you";
	char		dest[50] = "ITS A TRAP";

	printf("Before ft_memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, 50);
	printf("After ft_memcpy dest = %s\n", dest);
	return (0);
}


int	main(void)
{
	char	str1[50] = "BEFORE";
	const char str2[50]  = "BEFORE";

	printf("Before memmove dest = %s, src = %s\n", str1, str2);
	ft_memmove(str1, str2, 50);
	printf("After memmove dest = %s, src = %s\n", str1, str2);
	return (0);
}


int main()
{
	int ptr;
	
	ptr = ft_strlen("jasdhfgkdfhbgdsfgiuasbhguahdg");
	printf("This is de lenght of prt |%d|", ptr);
	return(0);	
}




#include <stdio.h>


int main () 
{
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   ft_strlcpy(dest, src, 15);

   printf("Final destination string : |%s|", dest);
   
   return(0);
}


#include <stdio.h>

int main () {
   int i = 0;
   char c;
   char str[] = "holaquetaaal";
   
   while(str[i]) 
   {
      putchar (ft_toupper(str[i]));
      i++;
   }
   return(0);
}


int main () {
   int i = 0;
   char c;
   char str[] = "HOLAQIUETAL";
   
   while(str[i]) 
   {
      putchar (ft_tolower(str[i]));
      i++;
   }
   return(0);
}
*/