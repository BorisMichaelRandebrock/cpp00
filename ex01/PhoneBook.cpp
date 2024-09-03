/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:49:35 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/03 17:24:25 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
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

PhoneBook::PhoneBook() : totalContacts(0) {}

std::string PhoneBook::speak() {
	return "blahblahblah";
}

PhoneBook::~PhoneBook() {
	std::cout << MAGENTA << "Phonebook: i am being destroyed 😥" << RESET << std::endl;
};

std::string getInput(const std::string &prompt, const std::string &inputField) {
	std::string input;
	while (42) {
		std::cout << prompt << std::endl; 
		std::getline(std::cin, input);
		if (std::cin.eof()) {
            std::cout << RED << "EOF encountered. Exiting." << RESET << std::endl;
			exit(0);
		}
		if (!input.empty() && input != " ") {
			break;
		}
        std::cout << RED << "Please enter a valid input" << GREEN << inputField << RESET << std::endl;
	}
	return input;
}
	
void PhoneBook::addContact() {
	std::string name, lastName, nickName, phoneNumber, secret;

    name = getInput("Please enter the contact's name.. 🤗", " name");
    lastName = getInput("Please enter the contact's last name..", " last name");
    nickName = getInput("Please enter the contact's nickname..", " nickname");
    phoneNumber = getInput("Please enter the contact's phone number.. 📱", " telephone number");
    secret = getInput("Please enter the contact's darkest secret. 👿", " darkest secret");
	contacts[totalContacts % 8] = Contact(totalContacts % 8, name, lastName, nickName, phoneNumber, secret);
	//if (totalContacts < 8)
	totalContacts++;
}

std::string formatField(const std::string &field) {
    if (field.length() > 10) {
        return field.substr(0, 9) + ".";
	} else {
		std::stringstream ss;
		ss << std::setw(10) << field;
		return ss.str();
	}
}

void PhoneBook::search() {
	if (totalContacts == 0) {
		std::cout << RED << "No Contacts stored 😓,.. nothing to display..." << RESET << std::endl << std::endl;
		return;
	}
	std::cout << "" << std::endl;	
	std::cout << "***********************************************************************************" << std::endl;	
	std::cout << "" << std::endl;	

	for (int i = 0; i < 8; i++) {
        std::cout << std::setw(10) << "Index: " << i << " | ";
        std::cout << std::setw(10) << "Name: " << formatField(contacts[i].getFirstName()) << " |  ";
        std::cout << std::setw(10) << "Last Name: " << formatField(contacts[i].getLastName()) << " | ";
        std::cout << std::setw(10) << "Nickname: " << formatField(contacts[i].getNickName()) << std::endl;
	}
	std::cout << "" << std::endl;	
	std::cout << "***********************************************************************************" << std::endl;	
	std::cout << "" << std::endl;	
	int	searched;
	std::cout << "Please enter the contacts index number to display all details " << std::endl << std::endl;

	std::cin >> searched;
	int i = 0;
	while (i < totalContacts)
		i++;
	if (searched > i -1) {
		std::cout << RED << "The contact at index " << searched << " has not been created or is out of bounds" << RESET << std::endl << std::endl;
		return;
	}
	
	std::cout << "" << std::endl;	
	std::cout << "***********************************************************************************" << std::endl;	
	std::cout << "" << std::endl;	
	std::cout << "Name:     		" << GREEN << contacts[searched].getFirstName() << RESET << std::endl;
	std::cout << "Lastname: 		" << GREEN << contacts[searched].getLastName() << RESET << std::endl;
	std::cout << "Nickname: 		" << GREEN << contacts[searched].getNickName() << RESET << std::endl;
	std::cout << "Telephone:	 	" << GREEN << contacts[searched].getPhoneNumber() << RESET << std::endl;
	std::cout << "Darkest Secret:		" << GREEN << contacts[searched].getSecret() << RESET << std::endl;
	std::cout << "" << std::endl;	
	std::cout << "***********************************************************************************" << std::endl;	
	std::cout << "" << std::endl;	

}
