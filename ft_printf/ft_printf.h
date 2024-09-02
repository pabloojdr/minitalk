/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 19:17:02 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/08/23 19:18:33 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h> // Hay que borrarla antes de entregar

/// @brief Prints a character.
/// @param c Character to print
/// @return 1
int	ft_putchar(char c);

/// @brief Prints a string of characters
/// @param str String to print
/// @return Number of characters printed
int	ft_putstr(char *str);

/// @brief Prints a decimal number converted to an hexadecimal one
/// @param n Decimal number to print
/// @param c Character used to know wether an uppercase or lowercase 
/// alphabet is required
/// @return Number of characters printed 
int	ft_hexa(unsigned long int n, char c);

/// @brief Counts the number of digits in a number (including the sign)
/// @param n 
/// @return number of digits
int	digits(int n);

/// @brief Prints a decimal number in base 10
/// @param n Decimal number to print
/// @return Number of characters printed
int	ft_putnumber(int n);

/// @brief Counts the number of digits in an unsigned number
/// @param n 
/// @return Number of digits
int	digits_unsigned(unsigned int n);

/// @brief Prints an unsigned number in base 10
/// @param n Unsigned number to print
/// @return Number of digits printed
int	ft_putnumber_unsigned(unsigned int n);

/// @brief Prints a pointer direction
/// @param n Pointer direction
/// @return Number of characters written
int	ft_putvoid(unsigned long int n);
#endif
