/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:12:28 by brandebr          #+#    #+#             */
/*   Updated: 2024/08/26 19:01:28 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

// city.hpp
class City {

  std::string name;
  int population;

public:
  City(std::string new_name, int new_pop);
  ~City();
};

// city.cpp
City::~City() {

  // any final cleanup

}
class PhoneBook {
	
}; // construc constr-copia -assignacion destructor

#endif
