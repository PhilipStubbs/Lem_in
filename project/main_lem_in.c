/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lem_in.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstubbs <pstubbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 08:31:17 by pstubbs           #+#    #+#             */
/*   Updated: 2018/07/24 13:31:09 by pstubbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int	main(void)
{
	t_hold *node;

	node = malloctime();
	getinfo(node);


	// printf("ANTS = %d\n", node->ants);
	// printf("START = %s\n", node->start->name);
	// printf("END = %s\n", node->end->name);
	// while (node->room != NULL)
	// {
	// 	printf("%s x:%d y:%d\n", node->room->name, node->room->x, node->room->y);
	// 	node->room = node->room->next;
	// }
	// printf("Totalrooms = %d\n", node->totalrooms);

	destroy(&node);
}
