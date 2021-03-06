/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_compares.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youkim < youkim@student.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:08:35 by youkim            #+#    #+#             */
/*   Updated: 2021/12/19 20:50:43 by youkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_big(t_engine *e, t_flag f, int pivot[2])
{
	const int	num = head_num(e, f);

	return (pivot[HI] <= num);
}

bool	is_mid(t_engine *e, t_flag f, int pivot[2])
{
	const int	num = head_num(e, f);

	return (pivot[LO] <= num && num < pivot[HI]);
}

bool	is_smol(t_engine *e, t_flag f, int pivot[2])
{
	const int	num = head_num(e, f);

	return (num < pivot[LO]);
}
