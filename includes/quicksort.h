/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim < youkim@student.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:02:58 by youkim            #+#    #+#             */
/*   Updated: 2021/12/16 15:52:28 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUICKSORT_H
# define QUICKSORT_H

typedef enum e_sortflag
{
	ROTS = 0,
	PUSHES = 1,
	LO = 0,
	HI = 1,
	UP = 0,
	MID = 1,
	DOWN = 2,
	BIG = 0,
	SMOL = 2,
	COUNTER = 3,
}	t_sortres;

//@func
/*
** < number_utils.c > */

int		head_num(t_engine *engine, t_flag from);
int		tail_num(t_engine *engine, t_flag from);
void	set_pivot(t_engine *e, t_flag from, int size, int pivot[2]);
int		get_pivot(t_engine *e, t_flag from, int size);
void	set_dequnpack(t_engine *e, t_flag from, int size, int arr[]);
bool	is_sorted(t_engine *engine, t_flag from);
/*
** < quicksort.c > */

void	partition_b(t_engine *e, int size);
void	partition(t_engine *e, int size, t_flag from);
/*
** < quicksort_utils.c > */

int		head_next_num(t_engine *engine, t_flag from);
void	move_node(t_engine *e, t_flag from, int pivot[2], int psize[4]);
/*
** < smolsort.c > */

void	smolsort(t_engine *e, t_flag from);
#endif