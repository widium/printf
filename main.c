/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:05:31 by ebennace          #+#    #+#             */
/*   Updated: 2021/11/11 14:01:10 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	char *str = NULL;
	int adrss = 167;
	unsigned int unbr = 354687524;
	char c = '%';


	printf("==========================\n");
	printf("test avec des char\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%c\n", c));
	printf("sy nbr: %d\n",printf("%c\n", c));


	printf("==========================\n");
	printf("test avec des string\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%s\n", str));
	printf("sy nbr: %d\n",printf("%s\n", str));

	printf("==========================\n");
	printf("test avec des Int\n");
	printf("==========================\n");

	printf("ft nbr : %d\n",ft_printf("%d\n", adrss));
	printf("sy nbr: %d\n",printf("%d\n", adrss));

	printf("==========================\n");
	printf("test avec des Unsigned Int\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%u\n", unbr));
	printf("sy nbr: %d\n",printf("%u\n", unbr));


	printf("==========================\n");
	printf("test avec des Hexadecimal\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%x\n", adrss));
	printf("sy nbr: %d\n",printf("%x\n", adrss));

	printf("==========================\n");
	printf("test avec des Adresse\n");
	printf("==========================\n");

	printf("ft nbr: %d\n",ft_printf("%p\n", &adrss));
	printf("sy nbr: %d\n",printf("%p\n", &adrss));

}
