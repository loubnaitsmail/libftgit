/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litsmail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:22:39 by litsmail          #+#    #+#             */
/*   Updated: 2020/12/12 17:32:15 by litsmail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*copy;
	unsigned int	i;
	unsigned int	limit;

	i = 0;
	if ((!s) || (!(copy = (char *)malloc(sizeof(char) * len + 1))))
		return (NULL);
	limit = ft_strlen(s);
	while (i + start < limit && i < len)
	{
		copy[i] = s[i + start];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
