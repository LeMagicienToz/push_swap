/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muteza <muteza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:40:08 by muteza            #+#    #+#             */
/*   Updated: 2022/05/12 17:49:03 by muteza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isdigit(char c, t_exec *all)
{
	if (c >= '0' && c <= '9')
	{
		all->k++;
		return (1);
	}
	else
		return (0);
}
