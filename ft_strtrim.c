/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <lmalkhas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:44:29 by lmalkhas          #+#    #+#             */
/*   Updated: 2022/03/25 21:12:51 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	len;
	char	*trimed;

	len = ft_strlen(s1);
	start_index = -1;
	if (!s1 || !set)
		return (NULL);
	if (!(*s1))
		return (ft_strdup(s1));
	while (++start_index < len)
	{
		if (ft_strchr(set, s1[start_index]) == 0)
			break ;
	}
	while (len - 1 >= start_index)
	{
		if (ft_strchr(set, s1[--len]) == 0)
			break ;
	}
	len = (len - start_index) + 1;
	trimed = ft_substr(s1, start_index, len);
	if (!trimed)
		return (NULL);
	return (trimed);
}
