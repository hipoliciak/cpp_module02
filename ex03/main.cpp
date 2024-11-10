/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 00:26:08 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 21:45:32 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(0), Fixed(1));
	Point c(Fixed(1), Fixed(0));
	Point to_check1(Fixed(0.4f), Fixed(0.4f));
	Point to_check2(Fixed(1.5f), Fixed(1.5f));
	Point to_check3(Fixed(0.0f), Fixed(0.5f));
	Point to_check4(Fixed(0.5f), Fixed(0.0f));

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "to_check1: " << to_check1 << std::endl;
	std::cout << "to_check2: " << to_check2 << std::endl;
	std::cout << "to_check3: " << to_check3 << std::endl;
	std::cout << "to_check4: " << to_check4 << std::endl;

	if (bsp(a, b, c, to_check1)) {
		std::cout << "Point is inside the triangle" << std::endl;
	} else {
		std::cout << "Point is outside the triangle" << std::endl;
	}

	if (bsp(a, b, c, to_check2)) {
		std::cout << "Point is inside the triangle" << std::endl;
	} else {
		std::cout << "Point is outside the triangle" << std::endl;
	}

	if (bsp(a, b, c, to_check3)) {
		std::cout << "Point is inside the triangle" << std::endl;
	} else {
		std::cout << "Point is outside the triangle" << std::endl;
	}

	if (bsp(a, b, c, to_check4)) {
		std::cout << "Point is inside the triangle" << std::endl;
	} else {
		std::cout << "Point is outside the triangle" << std::endl;
	}

	return 0;
}
