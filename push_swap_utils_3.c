/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:03:54 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 14:04:27 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sx(t_dll *stk)
{
	int	tmp;

	if (stk->len < 2)
		return (1);
	tmp = stk->head->val;
	stk->head->val = stk->head->next->val;
	stk->head->next->val = tmp;
	return (1);
}

