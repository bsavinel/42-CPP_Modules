/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:30:19 by bsavinel          #+#    #+#             */
/*   Updated: 2022/06/07 18:45:15 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_TPP
# define ITER_TPP

template <typename T>
void iter(T *tab, int size, void (*f)(T))
{
	for (int i = 0; i < size; i++)
	{
		f(tab[i]);
	}
}

#endif