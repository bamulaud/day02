/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:53:14 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/07 15:27:52 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdlib.h>
#include<unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

int	main(void)
{
	char letter ='a';

	while(letter <='z')
	{
		ft_putchar(letter);
		letter++;
	}
	return 0;
}

