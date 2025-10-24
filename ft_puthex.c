/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:19:34 by malavaud          #+#    #+#             */
/*   Updated: 2025/10/24 15:50:28 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char f)
{
	char	*base;
	int		len;

	len = 0;
	if (n >= 16)
		len += ft_puthex(n / 16, f);
	if (f == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	len += ft_putchar(base[n % 16]);
	return (len);
}
