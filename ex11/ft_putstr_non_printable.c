/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 08:20:58 by mmoumni           #+#    #+#             */
/*   Updated: 2021/06/30 13:00:43 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int	n)
{
	int		i;
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	i = n;
	ft_putchar(hexa_base[i / 16]);
	ft_putchar(hexa_base[i % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_putchar('\\');
			print_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
