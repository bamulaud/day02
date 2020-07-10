/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:04:13 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/10 14:39:18 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbersn(void)
{
	char letter = '0';
	
	while (letter <='9')
	{
		ft_putchar(letter);
		letter++;
	}

}
