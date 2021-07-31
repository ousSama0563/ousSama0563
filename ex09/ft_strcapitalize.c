/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 08:58:05 by mmoumni           #+#    #+#             */
/*   Updated: 2021/06/30 13:04:57 by mmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_lower(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	return (0);
}

int	ft_is_upper(char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_upper(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	if (ft_is_lower(str[0]) == 1)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_is_lower(str[i]) == 1)
		{
			if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
