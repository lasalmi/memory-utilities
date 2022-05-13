/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memused.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:55:37 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/12 21:58:55 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

/* Returns the size of the mymalloc allocated memory
pointed by ptr */

size_t	ft_memused(void *ptr)
{
	size_t	*to_read;

	to_read = (size_t *)ptr;
	return(*--to_read);
}
