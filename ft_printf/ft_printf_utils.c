/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:16:42 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/08/23 20:48:48 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count + 1);
}

int	ft_putnumber(int n)
{
	char	d;
	int		count;

	count = digits(n);
	if (n == -2147483648)
	{
		return (write(1, "-2147483648", 11), 11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnumber(n / 10);
		ft_putnumber(n % 10);
	}
	else
	{
		d = n + '0';
		write(1, &d, 1);
	}
	return (count);
}

int	ft_hexa(unsigned long int n, char c)
{
	char	*alph;
	int		res;

	res = 1;
	if (c == 'x')
		alph = "0123456789abcdef";
	else if (c == 'X')
		alph = "0123456789ABCDEF";
	if (n > 15)
	{
		res = res + ft_hexa(n / 16, c);
		write(1, &alph[n % 16], 1);
	}
	else
	{
		write(1, &alph[n], 1);
	}
	return (res);
}
