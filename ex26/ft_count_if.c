/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kolya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:54:06 by kolya             #+#    #+#             */
/*   Updated: 2019/09/05 16:55:50 by kolya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int		count;

	count = 0;
	while (tab)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}