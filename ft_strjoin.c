/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmalkhas <lmalkhas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:42:23 by lmalkhas          #+#    #+#             */
/*   Updated: 2022/03/14 14:31:08 by lmalkhas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;

	strjoin = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!strjoin)
		return (NULL);
	ft_strlcpy(strjoin, s1, ft_strlen(s1) + 1);
	ft_strlcat(strjoin, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (strjoin);
}
