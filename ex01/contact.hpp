/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 15:48:19 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/05 15:27:38 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


class Contact {
	
	int index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	int phoneNumber;
	std::string secret;

public:
	Contact();
	Contact(int index, std::string firstName, std::string lastName, std::string nickName, int phoneNumber, std::string secret);
	~Contact();

	int getIndex() const; 
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	int getPhoneNumber() const;
	std::string getSecret() const;
};

#endif
