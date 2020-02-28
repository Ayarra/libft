/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_spaces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 16:10:32 by hhamdaou          #+#    #+#             */
/*   Updated: 2018/10/20 16:10:59 by hhamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		last_spaces(char const *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	i--;
	while (i > 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
	{
		i--;
		j++;
	}
	return (j);
}