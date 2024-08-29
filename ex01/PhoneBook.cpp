/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:49:35 by brandebr          #+#    #+#             */
/*   Updated: 2024/08/29 18:54:04 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "phonebook.hpp"

PhoneBook::PhoneBook(void) {

	public:
		addContact(int new_index, std::string new_firstname, std::string new_lastname; std::string new_nickname);
}
 

std::string PhoneBook::speak() {
	return "blah";
}

PhoneBook::~PhoneBook() {
	std::cout << "i have been destroyed" << std::endl;
};

void PhoneBook::addContact(int new_index, std::string new_firstname, std::string new_lastname; std::string new_nickname) {
	if (index >= 0 && index < 8) {
		contacts[index] = contact;
	} else {
		contacts.pop();
		contacts[7] = contact;
	}
}
