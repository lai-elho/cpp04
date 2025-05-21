/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lai-elho <lai-elho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:18:24 by lai-elho          #+#    #+#             */
/*   Updated: 2025/05/21 00:47:49 by lai-elho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    delete j;
    delete i;

    Dog dog1;
    dog1.makeSound();

    Dog dog2 = dog1; // Should perform a deep copy

    return 0;
}
