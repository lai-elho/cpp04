/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lai-elho <lai-elho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:20:50 by lai-elho          #+#    #+#             */
/*   Updated: 2025/05/15 17:20:51 by lai-elho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog created\n";
}

Dog::Dog(const Dog &other) : Animal(other) {
    _brain = new Brain(*other._brain);
    std::cout << "Dog copied\n";
}

Dog &Dog::operator=(const Dog &other) {
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "Dog destroyed\n";
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!\n";
}
