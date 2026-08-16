/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 01:52:40 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 02:29:29 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	process_user_input(t_input *store, int ac, char **av)
{
	// To be implemented
}

void	init_variables(t_input *store, t_dll *stack_a, t_dll *stack_b)
{
	int	i;

	i = -1;
	while (++i < 11)
		store->ops[i] = 0;
	store->selected_mode = 0;
	store->bench_mode = 0;
	store->num_cnt = 0;
	store->algo_used = 0;
	store->disorderness = 0.0;
	stack_a->len = 0;
	stack_a->head = NULL;
	stack_a->tail = NULL;
	stack_b->len = 0;
	stack_b->head = NULL;
	stack_b->tail = NULL;
}

int	main(int ac, char **av)
{
	t_input	user_input;
	t_dll	stack_a;
	t_dll	stack_b;

	init_variables(&user_input, &stack_a, &stack_b);
	if (!process_user_input(&user_input, ac, av)
		|| has_duplicates(user_input.arr, user_input.num_cnt))
	{
		ft_putstr("Error\n");
		return (1);
	}
	user_input.disorderness = compute_disorder(user_input.arr,
			user_input.num_cnt);
	set_ranks(&user_input);
	run_push_swap(&user_input, &stack_a, &stack_b);
	return (0);
}
