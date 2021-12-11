/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manager_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim < youkim@student.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 19:41:54 by youkim            #+#    #+#             */
/*   Updated: 2021/12/11 19:42:50 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deque	*get_deque(t_engine *engine, t_flag which)
{
	if (which == STACK_A)
		return (engine->a);
	else if (which == STACK_B)
		return (engine->b);
	else if (which == STACK_BOTH)
		yerror("get_deque", "STACK_BOTH is only allowed in oper_manager");
	yerror("get_deque", "tried to choose nonexistant stack");
	return (NULL);
}

//	it's like get_deque but gives you the other one
t_deque	*get_deque_reversed(t_engine *engine, t_flag which)
{
	if (!(STACK_A <= which && which <= STACK_B))
		yerror("get_deque_reversed", "tried to choose nonexistant stack");
	return (get_deque(engine, 1 - which));
}

//	enum -> const string
const char	*get_op_name(t_op op)
{
	const static char	*op_name[11] = {
		"SA", "SB", "SS", "PA", "PB", "RA", "RB", "RR", "RRA", "RRB", "RRR"};

	if (!(SA <= op && op <= RRR))
		yerror("get_op_name", "tried to get nonexistant operation name");
	return (op_name[op]);
}