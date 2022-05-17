/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <lmalkhas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:14:33 by lmalkhas          #+#    #+#             */
/*   Updated: 2022/03/13 17:14:33 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*temp;

	temp = (char *)malloc(sizeof(char ) * len);
	if (!temp)
		return (NULL);
	else
	{
		i = 0;
		while (i < len)
		{
			*(temp + i) = *(const char *)(src + i);
			i++;
		}
		i = 0;
		while (i < len)
		{
			*(char *)(dst + i) = *(temp + i);
			i++;
		}
		free (temp);
	}
	return (dst);
}
