/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:53:14 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/10 14:36:01 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char letter ='a';

	while(letter <='z')
	{
		ft_putchar(letter);
		letter++;
	}
}

