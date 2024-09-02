/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:49:35 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/02 15:14:38 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
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

void PhoneBook::addContact() {
	std::string name, lastName, nickName, phoneNumber, secret;

	std::cout << "Please enter the contacts name.. 🤗" << std::endl;
	std::cin >> name;
	std::cout << "Please enter the contacts last name.. " << std::endl;
	std::cin >> lastName;
	std::cout << "Please enter the contacts nickname.." << std::endl;
	std::cin >> nickName;
	std::cout << "Please enter the contacts phone number.. 📱" << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Please enter the contacts darkest secret. 👿" << std::endl;
	std::cin >> secret;

	if (totalContacts >= 0 && totalContacts < 8) {
		contacts[totalContacts] = Contact(totalContacts, name, lastName, nickName, phoneNumber, secret);
		totalContacts++;
		std::cout << "The Phonebook has been updated!" << std::endl;

	} else {
		contacts[7] = Contact(7, name, lastName, nickName, phoneNumber, secret);
		std::cout << "Your Phonebook has been updated!" << std::endl;
	}
}

void PhoneBook::search() {
	if (totalContacts == 0) {
		std::cout << RED << "No Contacts stored 😓,.. nothing to display..." << RESET << std::endl;
		return;
	}

	for (int i = 0; i < totalContacts; i++) {
        std::cout << "Contact " << i << " | ";
        std::cout << "Name: " << contacts[i].getFirstName() << " |  ";
        std::cout << "Last Name: " << contacts[i].getLastName() << " | ";
        std::cout << "Nickname: " << contacts[i].getNickName() << std::endl;		
	}
	
}
