/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:41:29 by mmoumni           #+#    #+#             */
/*   Updated: 2021/06/29 18:30:04 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	i = 0;
	while (src[l] != '\0')
		l++;
	if (size == 0)
		return (l);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (l);
}
