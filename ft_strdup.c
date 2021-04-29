/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpavon-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:11:58 by dpavon-g          #+#    #+#             */
/*   Updated: 2021/04/10 19:12:11 by dpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*ptr;

	len = ft_strlen((char *)s1) + 1;
	ptr = (char *)malloc(len);
	if (ptr == NULL)
		return (NULL);
	return (ft_memcpy(ptr, s1, len));
}
