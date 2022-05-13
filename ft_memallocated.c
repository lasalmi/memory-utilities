/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memallocated.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:59:09 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/12 22:08:36 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

size_t	ft_memallocated(void *ptr)
{
	size_t	*to_read;
	size_t	*result;
	to_read = (size_t *)ptr;
	result = to_read - 2;
	return (*result);
}
