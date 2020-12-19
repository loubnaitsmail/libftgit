/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litsmail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:22:39 by litsmail          #+#    #+#             */
/*   Updated: 2020/12/19 19:10:56 by litsmail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_min(size_t len, size_t s_len)
{
	if (len < s_len)
		return (len);
	else
		return (s_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*copy;
	unsigned int	i;
	size_t			s_len;
	size_t			real_len;

	i = 0;
	s_len = ft_strlen(s);
	real_len = ft_min(len, s_len);
	if ((!s) || (!(copy = (char *)malloc(sizeof(char) * real_len + 1))))
		return (NULL);
	while (i < real_len)
	{
		copy[i] = s[i + start];
		i++;
	}
	copy[i] = '\0';
	if (start >= s_len)
		copy = ft_calloc(1, 1);
	return (copy);
}
