/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myrealloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:58:54 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/13 15:32:49 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_mem.h"
void	*ft_myrealloc(void *ptr, size_t size)
{
	void	*new_ptr;

	new_ptr = ft_mymalloc(size);
	ft_memcpy(new_ptr, ptr, ft_memallocated(ptr));
	ft_myfree(&ptr);
	return (new_ptr);
}
