/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbonan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:14:40 by smbonan           #+#    #+#             */
/*   Updated: 2018/06/01 11:32:15 by smbonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			s[i] = 0;
			i++;
		}
		s[i] = '\0';
	}
}
