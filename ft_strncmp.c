/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:53:04 by chrlomba          #+#    #+#             */
/*   Updated: 2023/11/12 19:07:24 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *cmp, size_t n_bytes)
{
	size_t		i;

	i = 0;
	while (i < n_bytes && str[i] != '\0'
		&& cmp[i] != '\0' && str[i] == cmp[i])
		i++;
	if (i < n_bytes)
		return (str[i] - cmp[i]);
	else
		return (0);
}

// int	main(void)
// {
// 	const char *s1 = "ciao pasquale  ";
// 	const char *s2 = "ciao pasquale  ";
// 	int res = ft_strncmp(s1, s2, 14);
// 	printf ("il mio coso fa \t%i\n",res);
// 	int res2 = strncmp(s1, s2, 14);
// 	printf ("il suo coso fa \t%i\n",res2);
// }
