/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 02:21:08 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 02:31:17 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putstr(const char *str)
{
	int	len;

	len = ft_strlen(str);
	return (write(1, str, len));
}

int	has_duplicates(int *arr, int cnt)
{
	// To be implemented
}

void	set_ranks(t_input *store)
{
	// To be implemented
}
