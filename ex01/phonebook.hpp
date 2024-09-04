/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:12:28 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/04 12:00:03 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"
# include <string>

class PhoneBook {

	Contact contacts[8];
	int	totalContacts;

public:
	PhoneBook();
	~PhoneBook();

	std::string speak();
	void search();
	void addContact();
}; 

#endif
