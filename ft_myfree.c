/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myfree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:06:08 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/13 15:17:25 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

/* Frees memory allocated by mymalloc */

void	ft_myfree(void **ptr)
{
	size_t	*to_free;

	to_free = *ptr;
	to_free -= 2;
	free(to_free);
	*ptr = NULL;
}
