/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myfree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:06:08 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/13 15:40:17 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_mem.h"
/* Frees memory allocated by mymalloc */

void	ft_myfree(void *ptr)
{
	size_t	*to_free;

	to_free = (size_t *)*ptr;
	to_free = to_free - 2;
	free(to_free);
}
