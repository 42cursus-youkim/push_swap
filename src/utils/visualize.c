/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim < youkim@student.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:33:26 by youkim            #+#    #+#             */
/*   Updated: 2021/12/19 20:04:32 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	NOTE: remove the whole file on prod, uses PRINTF
void	engine_visualize(t_engine *engine)
{
	const int		size = ymax(engine->a->size, engine->b->size);
	const t_deque	*deq[3] = {engine->a, engine->b, engine->hist};
	const t_dnode	*curs[3] = {deq[0]->head, deq[1]->head, deq[2]->head};

	for (int i = 0; i < size; i++) {
		printf("%2d: ", i);
		for (int j = 0; j < 2; j++) {
			if (curs[j]) {
				if (i >= size - deq[j]->size) {
					printf("%2d ", curs[j]->num);
					curs[j] = curs[j]->lower;
				} else printf(" . ");
			} else printf(" . ");
		}
		printf("\n");
	}
	printf("\n");
}
