/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:21:28 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/11 14:27:43 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prot.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
