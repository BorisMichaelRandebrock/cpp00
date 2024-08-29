/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:12:28 by brandebr          #+#    #+#             */
/*   Updated: 2024/08/29 13:51:10 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {

public:
	PhoneBook();
	std::string speak();
	~PhoneBook();
}; 

class Contacts {

public:
	Contacts();
	~Contacts();
};
#endif
