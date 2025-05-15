/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lai-elho <lai-elho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:18:58 by lai-elho          #+#    #+#             */
/*   Updated: 2025/05/15 17:18:59 by lai-elho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructed\n";
}

Brain::~Brain() {
    std::cout << "Brain destroyed\n";
}

Brain::Brain(const Brain &other) {
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    std::cout << "Brain copied\n";
}

Brain &Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

void Brain::setIdea(int index, const std::string &idea) {
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    return (index >= 0 && index < 100) ? ideas[index] : "";
}
