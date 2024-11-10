/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 00:27:40 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 21:06:42 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const Point& copy);
		Point(const Fixed x, const Fixed y);
		~Point();

		Point& operator=(const Point& copy);

		Fixed getX() const;
		Fixed getY() const;
	
	private:
		Fixed _x;
		Fixed _y;
};

std::ostream& operator<<(std::ostream& out, const Point& point);

#endif