/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnguegan <fnguegan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 01:44:51 by fnguegan          #+#    #+#             */
/*   Updated: 2026/08/16 02:10:56 by fnguegan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define SHOW_OP 1

# include <stdlib.h>
# include <unistd.h>

typedef struct s_user_input
{
	int				selected_mode;
	int				bench_mode;
	int				arr[600];
	int				num_cnt;
	double			disorderness;
	int				algo_used;
	int				ops[11];
}					t_input;

typedef struct s_dl_list
{
	int				len;
	struct s_node	*head;
	struct s_node	*tail;
}					t_dll;

#endif