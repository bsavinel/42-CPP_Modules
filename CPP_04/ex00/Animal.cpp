/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsavinel <bsavinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:27:33 by bsavinel          #+#    #+#             */
/*   Updated: 2022/05/27 17:15:51 by bsavinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

//!------------------------------CONSTRUCTOR----------------------------------

Animal::Animal()
{
	type = "animal";
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal copy constructor" << std::endl;
}

//!------------------------------DESTRUCTOR-----------------------------------

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

//!------------------------------OPERATOR-------------------------------------

Animal	&	Animal::operator=(const Animal& copy)
{
	this->type = copy.type;
	return(*this);
}

//!------------------------------FUNCTION-------------------------------------

void	Animal::makeSound() const
{
	std::cout << "Animal make sound" << std::endl;
}

std::string		Animal::get_type() const
{
	return (type);
}