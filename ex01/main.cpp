/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:14:07 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/03 16:53:21 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cstdlib>
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

char getValidUserInput() {
	char userInput;

    while (true) {
        std::cout << BLUE << "Please enter your choice: "<< RESET << std::endl << std::endl;
        std::cout << "Enter 1 for creating a new Contact." << std::endl;
        std::cout << "Enter 2 for searching contacts" << std::endl;
        std::cout << "Enter 3 for exit" << std::endl;

        std::cin >> userInput;
		if (std::cin.eof()) {  // Check for EOF
            std::cout << RED << "EOF encountered. Exiting." << RESET << std::endl;
            exit(0);  // Corrected: Use exit(0) to exit on EOF
        }
		if (userInput == '\n') {  // Check for empty input
            std::cout << RED << "Empty input is not valid. Please enter a valid number." << RESET << std::endl << std::endl;
            continue;  // Ask for input again
        }
        // Check if input is valid
        if (std::cin.fail() || std::cin.eof()) {
            // Clear error state
            std::cin.clear();
            // Discard invalid input
            std::cin.ignore(10000, '\n');  // Arbitrary large number
            std::cout << RED << "Invalid input. Please enter a  valid number .." << RESET << std::endl << std::endl;
		}else if (userInput != '1' && userInput != '2' && userInput != '3' && userInput != '4') {
				std::cout << RED << "Please enter a valid number between 1 and 3" << RESET << std::endl <<std::endl;
				continue;
        } else {
            // Input is valid
            std::cin.ignore(10000, '\n');  // Discard any remaining input in the buffer
            return userInput;
        }
    }
}

int main() {
PhoneBook phony;
	std::cout << "\033[2J\033[H" << std::endl; 
    std::cout << GREEN << "Welcome to the PhoneBook application!" << RESET << std::endl << std::endl;
	char	userInput;

	while (true) {
		userInput = getValidUserInput(); 

		switch (userInput) {
			case '1':
        		phony.addContact();
				break;
			case '2':
				phony.search();
				break;
			case '3':
				std::cout << GREEN <<"see you next time.. Goodbye.. 👋" << RESET << std::endl << std::endl;
				return 0;
				break;
			case '4':
				std::cout << MAGENTA << phony.speak() << RESET << std::endl;
				break;
			default:
				std::cout << RED << "Please enter a valid option 😡" << RESET << std::endl << std::endl;
				break;
		}
	}
	return 0;
}
/*
 
std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos)
        return "";
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, last - first + 1);
}

bool isValidNumber(const std::string& str) {
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); ++i) {  // C++98 compatible loop
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}
 
 
 
int getValidUserInput() {
    std::string inputStr;
    int userInput;

    while (true) {
        std::cout << YELLOW << "Please enter your choice: " << RESET << std::endl;
        std::cout << "Enter 1 for creating a new Contact." << std::endl;
        std::cout << "Enter 2 for searching contacts" << std::endl;
        std::cout << "Enter 3 for exit" << std::endl;

        std::getline(std::cin, inputStr);

        if (std::cin.eof()) {
            std::cout << RED << "EOF encountered. Exiting program." << RESET << std::endl;
            std::exit(0); // Corrected: Use std::exit(0) to handle EOF
        }

       // inputStr = trim(inputStr); // Trim the input to remove leading/trailing spaces

        if (inputStr.empty()) {
            std::cout << RED << "Empty input is not valid. Please enter a valid number." << RESET << std::endl;
            continue;
        }

        if (!isValidNumber(inputStr)) {
            std::cout << RED << "Invalid input. Please enter a valid number." << RESET << std::endl;
            continue;
        }

        userInput = std::atoi(inputStr.c_str()); // Convert string to integer using C++98-compatible function

        return userInput;
    }
}
*/
