/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamulaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:35:25 by bamulaud          #+#    #+#             */
/*   Updated: 2020/07/07 16:48:09 by bamulaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(num)
{
if (num >= 0)
	ft_putchar('P');
else if (num <= 0)
	ft_putchar('N');
}



