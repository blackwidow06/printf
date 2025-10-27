/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:12:31 by malavaud          #+#    #+#             */
/*   Updated: 2025/10/24 15:51:06 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_long(unsigned long n, char f)
{
	char	*base;
	int		len;

	len = 0;
	if (n >= 16)
		len += ft_puthex_long(n / 16, f);
	if (f == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_putptr(void *ptr)
{
	unsigned long	add;
	int				len;

	if (!ptr)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	len = 0;
	add = (unsigned long)ptr;
	write (1, "0x", 2);
	len += 2;
	len += ft_puthex_long(add, 'x');
	return (len);
}
