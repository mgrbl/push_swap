/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 23:28:00 by meghribe          #+#    #+#             */
/*   Updated: 2025/09/23 23:58:53 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_putstr_fd("Usage: ", 1);
		ft_putstr_fd(argv[0], 1);
		ft_putstr_fd(" numbers\n", 1);
	}
	return (0);
}
