/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdistance.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 22:01:35 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/13 15:26:33 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_mem.h"
/* Returns the distance of two pointers
NOTE: *to has to be after *from */

size_t	ft_memdistance(void *from, void *to)
{
	size_t	distance;

	distance = to - from;
	return (distance);
}
