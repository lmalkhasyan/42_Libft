/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <lmalkhas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:44:15 by lmalkhas          #+#    #+#             */
/*   Updated: 2022/03/13 22:33:08 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
			i++;
	}
	dst[i] = '\0';
	return (srcsize);
}
