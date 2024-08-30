/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:49:35 by brandebr          #+#    #+#             */
/*   Updated: 2024/08/30 19:23:31 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"


PhoneBook::PhoneBook() : totalContacts(0) {}
/*PhoneBook::PhoneBook(void) {

	public:
		addContact(int new_index, std::string new_firstname, std::string new_lastname; std::string new_nickname);
}*/
 

std::string PhoneBook::speak() {
	return "blahblahblah";
}

PhoneBook::~PhoneBook() {
	std::cout << "i have been destroyed" << std::endl;
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
	} else {
		contacts[7] = Contact(7, name, lastName, nickName, phoneNumber, secret);
	}
}
