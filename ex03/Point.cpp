/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 00:27:32 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 21:21:34 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
}

Point::Point(const Point& copy) : _x(copy._x), _y(copy._y) {
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) {
}

Point::~Point() {
}

Point& Point::operator=(const Point& copy) {
    if (this != &copy) {
        _x = copy._x;
        _y = copy._y;
    }
    return *this;
}

Fixed Point::getX() const {
	return _x;
}

Fixed Point::getY() const {
	return _y;
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
	out << "Point(" << point.getX() << ", " << point.getY() << ")";
	return out;
}
