/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 21:00:00 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 23:50:51 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	get_total_ops(t_input *store)
{
	int	total;
	int	i;

	total = 0;
	i = -1;
	while (++i < 11)
		total += store->ops[i];
	return (total);
}

static const char	*get_strategy_name(t_input *store)
{
	if (store->selected_mode == 1)
		return ("Simple");
	else if (store->selected_mode == 2)
		return ("Medium");
	else if (store->selected_mode == 3)
		return ("Complex");
	else
	{
		if (store->disorderness < 0.2)
			return ("Adaptive");
		else if (store->disorderness < 0.5)
			return ("Adaptive");
		else
			return ("Adaptive");
	}
}

static const char	*get_complexity_class(t_input *store)
{
	if (store->selected_mode == 1)
		return ("O(n²)");
	else if (store->selected_mode == 2)
		return ("O(n√n)");
	else if (store->selected_mode == 3)
		return ("O(n log n)");
	else
	{
		if (store->disorderness < 0.2)
			return ("O(n²)");
		else if (store->disorderness < 0.5)
			return ("O(n√n)");
		else
			return ("O(n log n)");
	}
}

void	print_benchmark(t_input *store)
{
	int	total_ops;

	if (!store->bench_mode)
		return ;
	total_ops = get_total_ops(store);
	fprintf(stderr, "[bench] disorder: %.2f%%\n", store->disorderness * 100.0);
	fprintf(stderr, "[bench] strategy: %s / %s\n",
		get_strategy_name(store), get_complexity_class(store));
	fprintf(stderr, "[bench] total_ops: %d\n", total_ops);
	fprintf(stderr, "[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n",
		store->ops[0], store->ops[1], store->ops[2],
		store->ops[3], store->ops[4]);
	fprintf(stderr, "[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n",
		store->ops[5], store->ops[6], store->ops[7],
		store->ops[8], store->ops[9], store->ops[10]);
}
