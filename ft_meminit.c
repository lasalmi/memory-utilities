/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_meminit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalmi <lasalmi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:22:01 by lasalmi           #+#    #+#             */
/*   Updated: 2022/05/13 12:13:12 by lasalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

/*If start is given, saves that ptr for later use, and subsequent
calls returns the distance of start and current */

static	size_t ft_trackmem(void *start, void *current)
{
		static void *following;

		if(!start && !current)
			return (0);
		if(start)
		{
			following = start;
			return (0);
		}
		else
			return (ft_memdistance(following, current));
}

/* Allocates memory with mymalloc and starts tracking that 
address */

void	ft_meminit(void **ptr, size_t size)
{
	*ptr = ft_mymalloc(size);
	ft_trackmem(*ptr, NULL);
}

void	ft_memupdate(void **ptr)
{

}