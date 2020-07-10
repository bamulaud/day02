/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:35:57 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/10 14:37:58 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char letter='z';
	while(letter >='a')
	{
		ft_putchar(letter);
		letter--;
	}
	
}

