/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 00:05:13 by meghribe          #+#    #+#             */
/*   Updated: 2025/09/24 00:06:02 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_usage(char *program_name)
{
	ft_putstr_fd("Usage: ", 1);
	ft_putstr_fd(program_name, 1);
	ft_putstr_fd(" numbers\n", 1);
}
