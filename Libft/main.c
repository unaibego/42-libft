/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubegona <ubegona@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:25:36 by ubegona           #+#    #+#             */
/*   Updated: 2022/09/02 16:04:46 by ubegona          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *s;
	char *d;
	char destino[100] = "olas";
	char source[100] = "hola guapo";

	d = &destino[0];
	s = &source[0];
	// printf("Original isalpha %d and mine %d\n", isalpha('&'), ft_isalpha('&'));
	// printf("Original isdigit %d and mine %d\n",isdigit('3'), ft_isdigit('3'));
	// printf("Original isalnum %d and mine %d\n",isalnum('Q'), ft_isalnum('Q'));
	// printf("Original isascii %d and mine %d\n",isascii('='), ft_isascii('='));
	// printf("Original isprint %d and mine %d\n",isprint('('), ft_isprint('('));
	// printf("Original strlen %lu and mine %lu\n",strlen("kaixo guapo"), ft_strlen("kaixo guapo"));
	// printf("Original memcpy %s and mine %s\n", memmove(s, p, 5), ft_memcpy(s,p, 5));
	
	// printf("Original memmove %s and mine\n", ft_memmove(p, s, 15));
	// printf("Original strlcpy %lu and mine \n", ft_strlcpy(d, s, 1));
	// printf("hau da d %s esa hau da s %s", d, s);
	// printf("Original strlcat %lu and mine \n", strlcat(d, s, 1));
	// printf("hau da d %s eta hau da s %s\n", d, s);

	// printf("toupper hau originala %c eta hau nirea da %c", toupper('Q'), ft_toupper('Q'));
	
	// printf("tolower hau originala %c eta hau nirea da %c", tolower('Q'), ft_tolower('Q'));

	// printf("strchr hau originala da %s eta hau nirea da %s", strchr(source, 90), ft_strchr(source, 90));

	// printf("strchr hau originala da %s eta hau nirea da %s", strrchr(source, 97), ft_strrchr(source, 97));

	// printf("strncmp hau originala da %d eta hau nirea da %d", strncmp(source, destino, 10), ft_strncmp(source, destino, 10));

	// printf("memchr hau originala da %s eta hau nirea da %s", memchr(source, 97, 4), ft_memchr(source, 97, 4));

	// printf("strnstr hau originala da %s eta hau nirea da %s", strnstr(source, destino, 10), ft_strnstr(source, destino, 10));

	printf("atoi hau originala da %d eta hau nirea da %d", atoi("-1"), ft_atoi("-1"));
	
	// printf("hau destinoa da %s", p);
	// ft_bzero(s, 3);
	// ft_bzero(s, 3);
	// // bzero(s, 3);
	// printf("Original bzero %c and mine\n",s[4]);
}
