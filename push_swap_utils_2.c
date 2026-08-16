/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 13:25:21 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 13:26:25 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	populate_stack(t_input *store, t_dll *lst)
{
	// To be implemented
}

double	compute_disorder(int *arr, int cnt)
{
	int		i;
	int		j;
	int		mistake;
	double	ret;

	mistake = 0;
	ret = 0;
	i = 0;
	if (cnt < 2)
		return (0);
	while (i < cnt)
	{
		j = i + 1;
		while (j < cnt)
		{
			if (arr[i] > arr[j])
				mistake++;
			j++;
		}
		i++;
	}
	ret = ((cnt - 1) * cnt) / 2;
	ret = mistake / (ret);
	return (ret);
}


int	has_duplicates(int *arr, int cnt)
{
	// To be implemented
}

void	set_ranks(t_input *store)
{
	// To be implemented
}