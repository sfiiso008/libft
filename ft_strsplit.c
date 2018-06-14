/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbonan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:52:02 by smbonan           #+#    #+#             */
/*   Updated: 2018/06/14 13:53:50 by smbonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ns;

	i = 0;
	j = 0;
	k = 0;
	if (s == NULL || c == 0)
		return (NULL);
	if (!(ns = (char**)malloc(sizeof(ns) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i] && i < ft_strlen(s) + 1)
			i++;
		if (i > j)
			ns[k++] = ft_strsub(s, j, (i - j));
	}
	ns[k] = 0;
	return (ns);
}
/*
int		main(int ac, char **av)
{
	char **s;

	s = ft_strsplit(av[1], av[2][0]);
	printf("%s\n", s[0]);
	printf("%s\n", s[1]);
	printf("%s", s[2]);
	return (0);
}*/
