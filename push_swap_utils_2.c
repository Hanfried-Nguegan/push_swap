/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 13:25:21 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 14:05:16 by fnguegan         ###   ########.fr       */
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

void	perform_rotations(t_dll *stk, int cnt, int disp, const char *op)
{
	while (cnt--)
	{
		if (ft_strncmp(op, "ra", 2) == 0 || ft_strncmp(op, "rb", 2) == 0)
			rx(stk);
		else if (ft_strncmp(op, "rra", 3) == 0 || ft_strncmp(op, "rra", 3) == 0)
			rrx(stk);
		if (disp)
			ft_putstr(op);
	}
}
