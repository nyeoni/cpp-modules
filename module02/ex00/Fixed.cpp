/*
 * File: Fixed.cpp
 * Project: cpp_modules
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : num_(0) {
  std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &copy) {
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

Fixed &Fixed::operator=(const Fixed &src) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->num_ = src.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->num_;
}
void Fixed::setRawBits(const int raw) {
  std::cout << "getRawBits member function called" << std::endl;
  this->num_ = raw;
}

Fixed::~Fixed() {
  std::cout << "Destructor called " << std::endl;
}
