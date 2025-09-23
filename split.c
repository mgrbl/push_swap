/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 00:09:59 by meghribe          #+#    #+#             */
/*   Updated: 2025/09/24 00:18:37 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

/* c is the delimiter */
size_t	count_delimiters(const char *s, char delimiter)
{
	size_t	i;
	size_t	delimiter_counter;

	i = 0;
	delimiter_counter = 0;
	while (s[i])
	{
		if ((char)s[i] == delimiter)
			delimiter_counter++;
		i++;
	}
	return (delimiter_counter);

}

char	**ft_split(const char *s, char c)
{
	(void)s,(void)c;
	return (NULL);
}

int	main(void)
{
	(void)ft_split("A a a a ", 'a');
	printf("%li", count_delimiters("buenos dias marta  ", ' '));
	return (0);
}
