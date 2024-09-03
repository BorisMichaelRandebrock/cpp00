/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:49:35 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/03 14:37:07 by brandebr         ###   ########.fr       */
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
	if (totalContacts >= 0 && totalContacts < 8) {

		contacts[totalContacts] = Contact(totalContacts, name, lastName, nickName, phoneNumber, secret);
		totalContacts++;
		std::cout << GREEN << "The Phonebook has been updated!" << RESET << std::endl;

	} else {
		contacts[7] = Contact(7, name, lastName, nickName, phoneNumber, secret);
		std::cout << GREEN << "Your Phonebook has been updated!" << RESET << std::endl;
	}
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
	std::cout << totalContacts << std::endl;
	if (totalContacts == 0) {
		std::cout << RED << "No Contacts stored 😓,.. nothing to display..." << RESET << std::endl;
		return;
	}

	for (int i = 0; i < totalContacts; i++) {
        std::cout << std::setw(10) << "Index: " << i << " | ";
        std::cout << std::setw(10) << "Name: " << formatField(contacts[i].getFirstName()) << " |  ";
        std::cout << std::setw(10) << "Last Name: " << formatField(contacts[i].getLastName()) << " | ";
        std::cout << std::setw(10) << "Nickname: " << formatField(contacts[i].getNickName()) << std::endl;		
	}
	int	searched;
	std::cout << "Please enter the contacts index number to display all details " << std::endl;
	std::cin >> searched;
	if (std::cin.fail()) {
		std::cout << "This contact has not been created" << std::endl;
		return;
	}
	std::cout << "Name:     		" << GREEN << contacts[searched].getFirstName() << RESET << std::endl;
	std::cout << "Lastname: 		" << GREEN << contacts[searched].getLastName() << RESET << std::endl;
	std::cout << "Nickname: 		" << GREEN << contacts[searched].getNickName() << RESET << std::endl;
	std::cout << "Telephone:	 	" << GREEN << contacts[searched].getPhoneNumber() << RESET << std::endl;
	std::cout << "Darkest Secret:		" << GREEN << contacts[searched].getSecret() << RESET << std::endl;

}
	/*
	while (true) {
		std::cout << "Please enter the contacts name.. 🤗" << std::endl;
		std::getline(std::cin, name);
		if (name.empty() || name == " ") {
			std::cout << RED << "Please enter a valid name" << RESET << std::endl;
			continue;
		}
		std::cout << "Please enter the contacts last name.. " << std::endl;
		std::getline(std::cin, lastName);
		if (lastName.empty() || lastName == " ") {
			std::cout << RED << "Please enter a valid last name" << RESET << std::endl;
			continue;
		}
		std::cout << "Please enter the contacts nickname.." << std::endl;
		std::getline(std::cin, nickName);
		if (nickName.empty() || nickName == " ") {
			std::cout << RED << "Please enter a valid nickname" << RESET << std::endl;
			continue;
		}
		std::cout << "Please enter the contacts phone number.. 📱" << std::endl;
		std::getline(std::cin, phoneNumber);
		if (phoneNumber.empty() || phoneNumber == " ") {
			std::cout << RED << "Please enter a valid phone number.." << RESET << std::endl;
			continue;
		}
		std::cout << "Please enter the contacts darkest secret. 👿" << std::endl;
		std::getline(std::cin, secret);
		if (secret.empty() || secret == " ") {
			std::cout << RED << "Please enter the darkest secret." << RESET << std::endl;
			continue;
		}
	}*/
