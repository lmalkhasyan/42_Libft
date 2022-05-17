/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <lmalkhas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:14:38 by lmalkhas          #+#    #+#             */
/*   Updated: 2022/03/17 16:57:03 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	n;

	if (!b)
		return (NULL);
	n = 0;
	while (n < len)
	{
		*(unsigned char *)(b + n) = (unsigned char)c;
		n++;
	}
	return (b);
}
