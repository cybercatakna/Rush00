/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntingmuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 22:27:18 by ntingmuk          #+#    #+#             */
/*   Updated: 2021/10/26 13:18:01 by ntingmuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw(int x, int y, int col, int row)
{
	if (col == 1 && row == 1)
		ft_putchar('A');
	else if ((col == 1 && row == y) || (col == x && row == 1))
		ft_putchar('C');
	else if (col == x && row == y)
		ft_putchar('A');
	else if ((col > 1 && col < x) && (row > 1 && row < y))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x < 1 || y < 1)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			draw(x, y, col, row);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
