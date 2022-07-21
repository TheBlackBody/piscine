/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:10:01 by sfernand          #+#    #+#             */
/*   Updated: 2022/07/17 17:29:09 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

void	ft_putchar(char c);

void	ft_b(int j)
{
	while (j > 0)
	{
		ft_putchar('B');
		--j;
	}
}

void	ligne(int v, int n, int y)
{
	if (n == 1)
	{
		ft_putchar('A');
		ft_b(v - 2);
		if (v > 1)
			ft_putchar('C');
		if (y > 1)
			ft_putchar('\n');
	}
	if (n == y && n > 1)
	{
		ft_putchar('C');
		ft_b(v - 2);
		if (v > 1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	if (y <= 0 || x <= 0)
		return ;
	ligne(x, b, y);
	b++;
	while (b < y && y > 2)
	{
		a = 1;
		ft_putchar('B');
		while (a < x - 1 && x > 2)
		{
			ft_putchar(' ');
			++a;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		b++;
	}
	ligne(x, b, y);
}
/*
int	main(void)
{
	rush(5, -2);
	return (0);
}*/
