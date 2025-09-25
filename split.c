/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 00:09:59 by meghribe          #+#    #+#             */
/*   Updated: 2025/09/25 22:39:29 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

/* c is the delimiter */
int	*count_words(const char *s, char delimiter, size_t* number_words)
{
	size_t	i;
	size_t	word_counter;
	int	in_word;
	int	*start_words;

	i = 0;
	*number_words = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i++] == delimiter)
		{
			in_word = 0;
			continue;
		}
		if (in_word == 0)
		{
			(*number_words)++;
			in_word = 1;
		}
	}
	start_words = (int *)malloc(sizeof(int) * ((*number_words) + 1));
	i = 0;
	in_word = 0;
	int j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == delimiter)
		{
			in_word = 0;
			start_words[j++] = ++i;
			continue;
		}
		if (in_word == 0)
		{
			(*number_words)++;
			in_word = 1;
		}
		i++;
	}
	start_words[j] = -1;
	return (start_words);
}
//
void	print_start_words(int *start_words)
{
	int	i;

	i = 0;
	while (start_words[i] != -1)
	{
		printf("\n%i", start_words[i++]);
		fflush(stdout);
	}
	printf("\n====================");
}

char	**ft_split(const char *s, char c)
{
	size_t	total_words;
	char**	splitted_words;
	int*	start_words;

	start_words = count_words(s, c, &total_words);
	print_start_words(start_words);
	printf("TOTAL WORDS : %li", total_words);
	splitted_words = (char **)malloc(sizeof(char *) * (total_words + 1));
	// proteger
	// proteger
	if (splitted_words == NULL)
		return (NULL);
	//copy_each_word(s, c, total_words, splitted_words);
	return (NULL);
}

int	main(void)
{
	printf("A");
	ft_split("Alvaro a a a ", 'a');
	//printf("%li", count_delimiters("buenos dias marta  ", ' '));
	return (0);
}
