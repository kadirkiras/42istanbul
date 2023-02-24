/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkiras <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:53:22 by kkiras            #+#    #+#             */
/*   Updated: 2023/02/24 05:39:39 by kkiras           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = str_len(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
		dest[i] = src[i];
		i++;
		}
	dest[i] = '\0';
	}
	return (len);
}
