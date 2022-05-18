/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:33:41 by mtritsch          #+#    #+#             */
/*   Updated: 2022/05/18 17:50:50 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (ptr);
}


// int	main(void)
// {
	// void	*res;
	// void	*mem;

	// mem = malloc(sizeof(*mem) * 15);
	// res = ft_memset(res, 'c', 3);
	// printf("%s", (char *)res);

	// char str[50] = "GeeksForGeeks is for programming geeks.";
    // printf("\nBefore memset(): %s\n", str);
  
    // // Fill 8 characters starting from str[13] with '.'
    // ft_memset(str + 13, '9', 8*sizeof(char));
  
    // printf("After memset():  %s", str);
    // return 0;

	// void	*mem;
	// int		arg;

	// alarm(5);
	// if (!(mem = malloc(sizeof(*mem) * 15)) || argc == 1)
	// 	return (0);
	// memset(mem, 'j', 15);
	// if ((arg = atoi(argv[1])) == 1)
	// {
	// 	if (mem != ft_memset(mem, 'c', 5))
	// 	{
	// 		write(1, "mem's adress was not returned\n", 30);
	// 		printf("After memset():  %p", mem);
	// 	}
	// 	write(1, mem, 15);
	// }
	// else if (arg == 2)
	// {
	// 	if (mem != ft_memset(mem, 'c', 14))
	// 	{
	// 		write(1, "mem's adress was not returned\n", 30);
	// 		printf("After memset():  %p", mem);
	// 	}
	// 	write(1, mem, 15);
	// }
	// else if (arg == 3)
	// {
	// 	if (mem != ft_memset(mem, '\n', 6))
	// 	{
	// 		write(1, "mem's adress was not returned\n", 30);
	// 		printf("After memset():  %s", (char *)mem);
	// 	}
	// 	write(1, mem, 15);
	// }
	// else if (arg == 4)
	// {
	// 	if (mem != ft_memset(mem, '\0', 1))
	// 	{
	// 		write(1, "mem's adress was not returned\n", 30);
	// 		printf("After memset():  %p", mem);
	// 	}
	// 	write(1, mem, 15);
	// }
	// return (0);
//}