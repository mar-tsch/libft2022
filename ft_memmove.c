/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:57:40 by mtritsch          #+#    #+#             */
/*   Updated: 2022/05/12 15:41:46 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	x;
	unsigned char	*udst;
	unsigned char	*usrc;

	x = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	if (udst == NULL || usrc == NULL)
		return (NULL);
	if (udst < usrc)
	{
		while (x < n)
		{
			udst[x] = usrc[x];
			x++;
		}
	}
	else
	{
		while (x < n)
		{
			udst[n - 1 - x] = usrc[n - 1 - x];
			x++;
		}
	}
	return (udst);
}
