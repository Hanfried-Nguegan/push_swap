/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_medium_algo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 17:55:47 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 20:07:15 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_medium_algo(t_input *store, t_dll *stk_a, t_dll *stk_b,
		int disp_op)
{
	if (stk_a->len <= 3)
	{
		sorting_manual_simple_sort(store, stk_a, stk_b, disp_op);
		return ;
	}
	sorting_radix_sort(store, stk_a, stk_b, disp_op);
}

void	sorting_chunk_sort(t_input *store, t_dll *stk_a, t_dll *stk_b,
		int disp_op)
{
	sorting_medium_algo(store, stk_a, stk_b, disp_op);
}
