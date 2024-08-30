/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:14:07 by brandebr          #+#    #+#             */
/*   Updated: 2024/08/30 19:20:41 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

int main() {
PhoneBook phony;
	std::cout << phony.speak() << std::endl; 
    std::cout << "Welcome to the PhoneBook application!" << std::endl;

    for (int i = 0; i < 10; ++i) {  // Attempt to add up to 10 contacts
        std::cout << "Adding contact " << (i + 1) << "..." << std::endl;
        phony.addContact();  // Add a contact
    }

    std::cout << "PhoneBook updated!" << std::endl;
	return (0);
}
