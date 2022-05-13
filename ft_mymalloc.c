/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mymalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:50:01 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/12 22:11:06 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

/* Allocates memory and stores the size of the allocation
to the start of the allocated memory and sets used(*++allocated) after.
returns the memory address after them */

void	*ft_mymalloc(size_t n)
{
	size_t	*allocated;

	allocated = (size_t *)malloc(n + sizeof(size_t) * 2);
	*allocated = n;
	*++allocated = 0;
	return (allocated + 1);
}
