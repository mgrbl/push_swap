/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 00:09:59 by meghribe          #+#    #+#             */
/*   Updated: 2025/09/24 15:05:55 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

/* c is the delimiter */
void	count_words(const char *s, char delimiter, size_t* number_words)
{
	size_t	i;
	size_t	word_counter;
	int	in_word;

	i = 0;
	*number_words = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == delimiter)
		{
			in_word = 0;
			i++;
			continue;
		}
		if (in_word == 0)
		{
			(*number_words)++;
			in_word = 1;
		}
		i++;
	}
}

char	**copy_each_word(const char *s, char c, size_t quantity, char **array)
{
}

void	free_split(char **s, size_t total_words)
{

}

char	**ft_split(const char *s, char c)
{
	size_t	total_words;
	char**	splitted_words;

	total_words = 0;
	count_words(s, c, &total_words);
	printf("TOTAL WORDS : %li", total_words);
	splitted_words = (char **)malloc(sizeof(char *) * (total_words + 1));
	if (splitted_words == NULL)
		return (NULL);
	copy_each_word(s, c, total_words, splitted_words);
	return (NULL);
}

int	main(void)
{
	printf("A");
	ft_split("Alvaro a a a ", 'a');
//printf("%li", count_delimiters("buenos dias marta  ", ' '));
	return (0);
}
