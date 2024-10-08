/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:29:49 by brandebr          #+#    #+#             */
/*   Updated: 2024/08/29 15:49:03 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype> 
#include <string>

std::string toUppercase(const std::string &str) {
	std::string res = str;
	for (std::string::size_type i = 0; i < res.length(); ++i) {
		res[i] = std::toupper(res[i]); 
	}
	return res;
}

int	main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else if (argc > 1) {
		std::string	res;
		for (int i = 1; i < argc; i++) {
			res += toUppercase(argv[i]);
			if (i < argc -1) {
				res += " ";
			}
		}
		std::cout << res << std::endl;
	}
	return (0);
}
