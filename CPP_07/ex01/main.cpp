/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:28:44 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/07 18:45:25 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.tpp"


void up_1(int &a)
{
	a = a + 1;
	return ;
}

int main()
{
	int tab_int[8] = {0, 1, 2 ,3 ,4, 5, 6, 7};
	for (int i = 0; i < 8; i++)
	{
		std::cout << tab_int[i] << " ";
	}
	std::cout << std::endl;
	
	iter(tab_int, 8, &up_1);

	for (int i = 0; i < 8; i++)
	{
		std::cout << tab_int[i] << " ";
	}
	std::cout << std::endl;
}