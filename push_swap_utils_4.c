/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:21:53 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 17:23:23 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_pos(int *arr, int cnt, int tg)
{
	int	i;

	i = 0;
	while (i < cnt)
	{
		if (arr[i] == tg)
			return (i);
		i++;
	}
	return (-1);
}

void	sort_tab(int *arr, int cnt)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < cnt)
	{
		j = i + 1;
		while (j < cnt)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
