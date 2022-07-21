/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmicol-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:33:48 by bmicol-s          #+#    #+#             */
/*   Updated: 2022/07/21 09:22:29 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int	ft_char_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

int	ft_checklastchar(char c)
{
	if ((c >= '0' && c <= '9') || ft_char_is_alpha(c))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]))
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (ft_checklastchar(str[i - 1]))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
