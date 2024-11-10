/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 00:25:44 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 20:55:20 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	_fixedPointValue = copy.getRawBits();
}

Fixed::Fixed(const int value)
{
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	_fixedPointValue = copy.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
	_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed& Fixed::operator--()
{
	_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

bool Fixed::operator>(const Fixed& other) const
{
	return _fixedPointValue > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) const
{
	return _fixedPointValue < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) const
{
	return _fixedPointValue >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) const
{
	return _fixedPointValue <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) const
{
	return _fixedPointValue == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) const
{
	return _fixedPointValue != other.getRawBits();
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return a > b ? a : b;
}

int Fixed::getRawBits() const
{
	return _fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

float Fixed::toFloat() const
{
	return (float)_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt() const
{
	return _fixedPointValue >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
