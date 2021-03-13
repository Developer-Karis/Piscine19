/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpapadop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:25:15 by kpapadop          #+#    #+#             */
/*   Updated: 2021/03/13 18:29:34 by kpapadop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest,char *src);
char	*ft_strncat(char *dest, char *src, int nb);
char	*ft_strstr(char *str, char *to_find);
/*unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
*/

int main()
{
	char	str1[] = "Hello\ncoucou";
	char	str2[] = "Hellocoucou";
	char	str3[] = "Hellocoucou";
	char	str4[] = "HelloCoucouuu";
	char	str5[] = "Hellocouco";
	char	str6[] = "Hellocoucou";
	char	str7[] = "Hellocoucou";
	char	str8[] = "ellocouco";
	char	str9[] = "";
	char 	str10[] = "hello";

	printf("\033[0;36m        ____________________\n\n*             C03 Karis        *\n        _____________________\033[0m");
	printf("\n\n\033[0;35mEX00\033[0m | original => %d / own => %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));
	printf("\033[0;35mEX00\033[0m | original => %d / own => %d\n\n", strcmp(str3, str4), ft_strcmp(str3, str4));
	printf("\033[0;35mEX00\033[0m | original => %d / own => %d\n\n", strcmp(str5, str6), ft_strcmp(str5, str6));
	printf("\033[0;35mEX00\033[0m | original => %d / own => %d\n\n", strcmp(str7, str8), ft_strcmp(str7, str8));
	printf("\033[0;35mEX00\033[0m | original => %d / own => %d\n\n", strcmp(str9, str10), ft_strcmp(str9, str10));

printf("\033[0;33m______-----____------______-------______\033[0m\n\n");
	printf("\033[0;32mEX01\033[0m | original => %d / own => %d\n\n", strncmp(str1, str2, 6), ft_strncmp(str1, str2, 6));
	printf("\033[0;32mEX01\033[0m | original => %d / own => %d\n\n", strncmp(str3, str4, 0), ft_strncmp(str3, str4, 0));
	printf("\033[0;32mEX01\033[0m | original => %d / own => %d\n\n", strncmp(str5, str6, 20), ft_strncmp(str5, str6, 20));
	printf("\033[0;32mEX01\033[0m | original => %d / own => %d\n\n", strncmp(str7, str8, 13), ft_strncmp(str7, str8, 13));
	printf("\033[0;32mEX01\033[0m | original => %d / own => %d\n\n", strncmp(str9, str10, 1), ft_strncmp(str9, str10, 1));
printf("\033[0;33m______-----____------______-------______\033[0m\n\n");
	char	dest1[20] = "Hello World!";
	char	src1[] = "Salut!";
	char	dest12[21] = "HelloWorld";
	char	src12[] = "Salut!";
	char	dest13[20] = "";
	char	src13[] = "Salut!";

	char	dest2[20] = "Hello World!";
	char	src2[] = "Salut!";
	char	dest21[21] = "HelloWorld";
	char	src21[] = "Salut!";
	char	dest22[20] = "";
	char	src22[] = "Salut!";

	char	dest3[20] = "Hello World!";
	char	src3[] = "Salut!";
	char	dest31[20] = "";
	char	src31[] = "Salut!";
	char	dest32[20] = "Hello World!";
	char	src32[7] = "";

	char	dest4[20] = "Hello World!";
	char	src4[] = "Salut!";
	char	dest41[20] = "";
	char	src41[] = "Salut!";
	char	dest42[20] = "Hello World!";
	char	src42[7] = "";	

/*	char	dest5[20] = "Hello World!";
	char	src5[] = "Salut!";
	char	dest6[20] = "Hello World!";
	char 	dest61[20] = "Hello World!";
	char 	dest62[20] = "Hello World!";
	char 	dest63[20] = "Hello World!";
	char 	dest64[20] = "Hello World!";
	char 	dest65[20] = "Hello World!";
	char 	dest66[40] = "Hello World!";
	char 	dest67[40] = "Hello World!";

	char	src6[] = "Salut!";
	char 	src7[10];
	char 	src8[] = "Salut, ca va? oui.";
*/
	char	st1[] = "CouCouHelloWorldCouCou";
	char	tof1[] = "Cou";
	char	st2[] = "HelloWorldCoui HelloWorld";
	char 	tof2[] = "HelHel";
	char	st3[] = "HellouCou";
	char	tof3[] = "ll";
	
	printf("\033[0;31mEX02\033[0m | original => %s\n       vs\n       own =>      %s\n\n", strcat(dest1, src1), ft_strcat(dest2, src2));
	printf("\033[0;31mEX02\033[0m | original => %s\n       vs\n       own =>      %s\n\n", strcat(dest12, src12), ft_strcat(dest21, src21));
	printf("\033[0;31mEX02\033[0m | original => %s\n       vs\n       own =>      %s\n\n", strcat(dest13, src13), ft_strcat(dest22, src22));

	printf("\033[0;33m______-----____------______-------______\033[0m\n\n");

	printf("\033[0;34mEX03\033[0m | original => %s\n       vs\n       own =>      %s\n\n", strncat(dest3, src3, 5), ft_strncat(dest4, src4, 5));
	printf("\033[0;34mEX03\033[0m | original => %s\n       vs\n       own =>      %s\n\n", strncat(dest31, src31, 6), ft_strncat(dest41, src41, 6));
	printf("\033[0;34mEX03\033[0m | original => %s\n       vs\n       own =>      %s\n\n", strncat(dest32, src32, 7), ft_strncat(dest42, src42, 7));
	printf("\033[0;34mEX03\033[0m | original => %s\n       vs\n       own =>      %s\n\n", strncat(dest32, src32, 0), ft_strncat(dest42, src42, 0));

printf("\033[0;33m______-----____------______-------______\033[0m\n\n");

	printf("\033[0;35mEX04\033[0m | original => %s\n       vs\n       own =>      %s\n\n", strstr(st1, tof1), ft_strstr(st1, tof1));
	printf("\033[0;35mEX04\033[0m | original => %s\n       vs\n       own =>      %s\n\n", strstr(st2, tof2), ft_strstr(st2, tof2));
	printf("\033[0;35mEX04\033[0m | original => %s\n       vs\n       own =>      %s\n", strstr(st3, tof3), ft_strstr(st3, tof3));

/*printf("\033[0;33m______-----____------______-------______\033[0m\n\n");

	char	*red = "\033[0;31m";
	char	*end = "\033[0m";

	printf("%sE05%s |         %lu / %d\n\n", red, end, strlcat(dest6, src6, 5), ft_strlcat(dest61, src6, 5));
	printf("     original | %s\n\n     own      | %s\n\n", dest6, dest61);
	printf("%sE05%s |         %lu / %d\n\n", red, end, strlcat(dest62, src6, 0), ft_strlcat(dest63, src6, 0));
	printf("     original | %s\n\n     own      | %s\n\n", dest62, dest63);
	printf("%sE05%s |         %lu / %d\n\n", red, end, strlcat(dest64, src6, 15), ft_strlcat(dest65, src6, 15));
	printf("     original | %s\n\n     own      | %s\n\n", dest64, dest65);
	printf("%sE05%s |         %lu / %d\n\n", red, end, strlcat(dest66, src7, 30), ft_strlcat(dest67, src7, 30));
	printf("     original | %s\n\n     own      | %s\n\n", dest66, dest67);


printf("\033[0;33m______-----____------______-------______\033[0m\n\n");*/
}
