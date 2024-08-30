/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 19:18:34 by brandebr          #+#    #+#             */
/*   Updated: 2024/08/30 19:39:11 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "contact.hpp"

Contact::Contact() : index(0), firstName(""), lastName(""), nickName(""), phoneNumber(""), secret("") {}

Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string secret)
	: index(index), firstName(firstName), lastName(lastName), nickName(nickName), phoneNumber(phoneNumber), secret(secret) {}

Contact::~Contact() {}

std::string Contact::getFirstName() const {
return firstName;
}
std::string Contact::getLastName() const {
return lastName;
}
std::string Contact::getNickName() const {
return nickName;
}
std::string Contact::getPhoneNumber() const {
return phoneNumber;
}
std::string Contact::getSecret() const {
return secret;
}
