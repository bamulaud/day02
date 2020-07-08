/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:35:57 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/07 16:01:34 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char letter='z';
	while(letter >='a')
	{
		ft_putchar(letter);
		letter--;
	}
	return 0;
}

