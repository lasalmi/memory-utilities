/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 14:16:30 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/13 14:44:25 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
size_t	ft_memallocated(void *ptr);
size_t	ft_memdistance(void *from, void *to);
void	ft_meminit(void **ptr, size_t size);
size_t	ft_memused(void *ptr);
void	ft_myfree(void **ptr);
void	*ft_mymalloc(size_t n);
void	*ft_myrealloc(void *ptr, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);