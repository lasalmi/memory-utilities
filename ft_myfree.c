/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myfree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:06:08 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/13 12:07:48 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	ft_myfree(void **ptr)
{
	size_t	*to_free;

	to_free = *ptr;
	to_free -= 2;
	free(to_free);
	*ptr = NULL;
}
