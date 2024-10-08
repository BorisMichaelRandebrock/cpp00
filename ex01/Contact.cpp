/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:18:34 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/06 13:39:10 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Contact.hpp"


Contact::Contact() : index(0), firstName(""), lastName(""), nickName(""), phoneNumber(0), secret("") {}

Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickName, int phoneNumber, std::string secret)
	: index(index), firstName(firstName), lastName(lastName), nickName(nickName), phoneNumber(phoneNumber), secret(secret) {}

Contact::~Contact() {}

int Contact::getIndex() const {
	return index;
}

std::string Contact::getFirstName() const {
return firstName;
}
std::string Contact::getLastName() const {
return lastName;
}
std::string Contact::getNickName() const {
return nickName;
}
int Contact::getPhoneNumber() const {
return phoneNumber;
}
std::string Contact::getSecret() const {
return secret;
}
