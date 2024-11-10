/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 00:26:08 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 21:24:39 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c;

	std::cout << "Tests from the sheet" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << std::endl;
	std::cout << "My tests" << std::endl;
	a = Fixed(42);
	c = Fixed(10.5f);
	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << a + c << std::endl;
	std::cout << a - c << std::endl;
	std::cout << a * c << std::endl;
	std::cout << a / c << std::endl;
	std::cout << Fixed::min(a, c) << std::endl;

	return 0;
}
