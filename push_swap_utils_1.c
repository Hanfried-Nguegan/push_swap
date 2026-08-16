/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 02:21:08 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 14:53:12 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putstr(const char *str)
{
	int	len;

	len = ft_strlen(str);
	return (write(1, str, len));
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		if (s1[i] == 0 || s2[i] == 0 || s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

char	*ft_itoa(int n)
{
	static char	buffer[12];
	int			i;
	long long	num;

	i = 0;
	num = n;
	if (n < 0)
	{
		buffer[i++] = '-';
		num *= -1;
	}
	while (num >= 10)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	buffer[i++] = num + '0';
	ft_rev_str(buffer, 0 + (n < 0), i - 1);
	buffer[i] = '\0';
	return (buffer);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
