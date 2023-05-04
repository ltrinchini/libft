/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltrinchini <ltrinchini@student.42lyon.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:56:35 by ltrinchi          #+#    #+#             */
/*   Updated: 2023/05/03 23:25:05 by ltrinchini       ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	size;	
	char	*dst;

	i = -1;
	j = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	dst = malloc(sizeof(char) * size + 1);
	if (!dst)
		return (0);
	while (++i < ft_strlen(s1))
		dst[i] = s1[i];
	while (i < size)
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (dst);
}
