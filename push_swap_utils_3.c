/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:03:54 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 14:53:36 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	px(t_dll *from, t_dll *to)
{
	t_node	*nd;

	nd = lst_pop_front(from);
	if (!nd)
		return (0);
	lst_add_front(to, nd);
	return (1);
}

int	rx(t_dll *stk)
{
	lst_rotate(stk, 1);
	return (1);
}

int	rrx(t_dll *stk)
{
	lst_rotate(stk, -1);
	return (1);
}

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

void	ft_rev_str(char *str, int l, int r)
{
	char	tmp;

	while (l < r)
	{
		tmp = str[l];
		str[l] = str[r];
		str[r] = tmp;
		l++;
		r--;
	}
}
