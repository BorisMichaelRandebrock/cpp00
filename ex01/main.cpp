/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:14:07 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/02 15:13:36 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>  ///allowed??
#include "phonebook.hpp"
#include "contact.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int getValidUserInput() {
	int userInput;
    while (true) {
        std::cout << GREEN << "Please enter your choice: "<< RESET << std::endl;
        std::cout << "Enter 1 for creating a new Contact." << std::endl;
        std::cout << "Enter 2 for searching contacts" << std::endl;
        std::cout << "Enter 3 for exit" << std::endl;

        std::cin >> userInput;

        // Check if input is valid
        if (std::cin.fail()) {
            // Clear error state
            std::cin.clear();
            // Discard invalid input
            std::cin.ignore(10000, '\n');  // Arbitrary large number
            std::cout << RED << "Invalid input. Please enter a  valid number .." << RESET << std::endl;
        } else {
            // Input is valid
            std::cin.ignore(10000, '\n');  // Discard any remaining input in the buffer
            return userInput;
        }
    }
}

int main() {
PhoneBook phony;
//	std::cout << phony.speak() << std::endl; 
    std::cout << CYAN << "Welcome to the PhoneBook application!" << RESET << std::endl;
	int	userInput;

	while (true) {
		userInput = getValidUserInput(); 

		switch (userInput) {
			case 1:
        		phony.addContact();
				break;
			case 2:
				/*std::cout <<*/ phony.search();
				break;
			case 3:
				std::cout << BLUE << "c u next time.. Goodbye.. 👋" << RESET << std::endl;
				return 0;
				break;
			case 4:
				std::cout << MAGENTA << phony.speak() << RESET << std::endl;
				break;
			default:
				std::cout << RED << "Please enter a valid option 😡" << RESET << std::endl;
				break;
		}
	}
    /*for (int i = 0; i < 10; ++i) {  // Attempt to add up to 10 contacts
        std::cout << "Adding contact " << (i + 1) << "..." << std::endl;
        phony.addContact();  // Add a contact
    }

    std::cout << "PhoneBook updated!" << std::endl;*/

	
	return (0);
}
