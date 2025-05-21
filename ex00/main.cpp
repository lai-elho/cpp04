/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lai-elho <lai-elho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:21:02 by lai-elho          #+#    #+#             */
/*   Updated: 2025/05/21 01:03:08 by lai-elho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

    std::cout << "--- TESTING ANIMAL INSTANTIATION ---\n";
    Animal base;
    std::cout << base.getType() << " makes sound: ";
    base.makeSound();

    std::cout << "\n--- TESTING ANIMAL POLYMORPHISM ---\n";

    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " makes sound: ";
    j->makeSound();

    std::cout << i->getType() << " makes sound: ";
    i->makeSound();

    delete j;
    delete i;

    std::cout << "\n--- TESTING WRONG ANIMAL ---\n";

    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " makes sound: ";
    wrongCat->makeSound();

    std::cout << wrongMeta->getType() << " makes sound: ";
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
