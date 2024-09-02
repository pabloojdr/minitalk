/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:39:04 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/08/23 20:36:35 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter(char c, va_list *list)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*list, int)));
	if (c == 's')
		return (ft_putstr(va_arg(*list, char *)));
	if (c == 'p')
	{
		return (ft_putvoid(va_arg(*list, unsigned long long)));
	}
	if (c == 'd' || c == 'i')
		return (ft_putnumber(va_arg(*list, int)));
	if (c == 'u')
		return (ft_putnumber_unsigned(va_arg(*list, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_hexa(va_arg(*list, unsigned int), c));
	if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(char const *s, ...)
{
	va_list	list;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(list, s);
	while (s[i] != 0)
	{
		if (s[i] == '%')
			printed += ft_filter(s[++i], &list);
		else if (s[i])
		{
			printed += ft_putchar(s[i]);
		}
		i++;
	}
	va_end(list);
	return (printed);
}

/* int main() {
	printf("Prueba caracter:\n");
	int i = ft_printf("%c", '\0');
	printf("\n");
	int j = printf("%c", '\0');
	printf("\n");
	printf("mio: %i\nprintf: %i\n\n", i, j);

	printf("Prueba string:\n");
	i = ft_printf("%s", "\0");
	printf("\n");
	j = printf("%s", "\0");
	printf("\n");
	printf("mio: %i\nprintf: %i\n\n", i, j);

	printf("Prueba puntero:\n");
	//int m = 1800;
	i = ft_printf("%p", (void *) 0);
	printf("\n");
	j = printf("%p", (void *) 0);
	printf("\n");
	printf("mio: %i\nprintf: %i\n\n", i, j);

	printf("Prueba numero decimal en base 10:\n");
	i = ft_printf("%d", -1994);
	printf("\n");
	j = printf("%d", -1994);
	printf("\n");
	printf("mio: %i\nprintf: %i\n\n", i, j);

	printf("Prueba entero en base 10:\n");
	i = ft_printf("%i", 1021994);
	printf("\n");
	j = printf("%i", 1021994);
	printf("\n");
	printf("mio: %i\nprintf: %i\n\n", i, j);

	printf("Prueba numero decimal en base 10 sin signo:\n");
	i = ft_printf("%u", -1989);
	printf("\n");
	j = printf("%u", -1989);
	printf("\n");
	printf("mio: %i\nprintf: %i\n\n", i, j);

	printf("Prueba numero hexadecimal en minusculas:\n");
	i = ft_printf("%x", 0);
	printf("\n");
	j = printf("%x", 0);
	printf("\n");
	printf("mio: %i\nprintf: %i\n\n", i, j);

	printf("Prueba numero hexadecimal en mayusculas:\n");
	i = ft_printf("%X", 24032003);
	printf("\n");
	j = printf("%X", 24032003);
	printf("\n");
	printf("mio: %i\nprintf: %i\n\n", i, j);

	printf("Prueba %%:\n");
	i = ft_printf("tamos al 100%%");
	printf("\n");
	j = printf("tamos al 100%%");
	printf("\n");
	printf("mio: %i\nprintf: %i\n", i, j);
} */