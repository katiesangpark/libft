/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alineayumi <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 15:23:17 by alineayum         #+#    #+#             */
/*   Updated: 2020/04/08 16:25:02 by alineayum        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr_to_b;

	ptr_to_b = (unsigned char *)b;
	while (len > 0)
	{
		*ptr_to_b = (unsigned char)c;
		len--;
		ptr_to_b++;
	}
	return (b);
}
