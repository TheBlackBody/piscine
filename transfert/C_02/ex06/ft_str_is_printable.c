/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmicol-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:12:53 by bmicol-s          #+#    #+#             */
/*   Updated: 2022/07/21 09:13:59 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 32) || (*str > 127))
			return (0);
		str++;
	}
	return (1);
}