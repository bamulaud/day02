/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:27:54 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/10 14:46:19 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0' - 1;
	while (a++ < '7')
	{
		b = a;
		while (b++ < '8')
		{
			c = b;
			while (c++ < '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}





