/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:04:13 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/07 16:18:16 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char letter = '0';
	
	while (letter <='9')
	{
		ft_putchar(letter);
		letter++;
	}
	return(0);
}
