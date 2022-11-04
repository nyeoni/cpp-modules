/*
 * File: Fixed.cpp
 * Project: cpp_modules
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Constructor
Fixed::Fixed() : num_(0) {}
Fixed::Fixed(const int num) : num_(num << fBits_) {}
Fixed::Fixed(const float num) : num_((int) roundf(num * (1 << fBits_))) {}
Fixed::Fixed(const Fixed &copy) : num_(copy.num_) {
}

// Operator Overload
Fixed &Fixed::operator=(const Fixed &src) {
  this->num_ = src.getRawBits();
  return (*this);
}
bool Fixed::operator>(const Fixed &src) const {
  return (num_ > src.getRawBits());
}
bool Fixed::operator<(const Fixed &src) const {
  return (num_ < src.getRawBits());
}
bool Fixed::operator>=(const Fixed &src) const {
  return (num_ >= src.getRawBits());
}
bool Fixed::operator<=(const Fixed &src) const {
  return (num_ <= src.getRawBits());
}
bool Fixed::operator==(const Fixed &src) const {
  return (num_ == src.getRawBits());
}
bool Fixed::operator!=(const Fixed &src) const {
  return (num_ != src.getRawBits());
}
Fixed Fixed::operator+(const Fixed &src) const {
  Fixed res;
  res.setRawBits(num_ + src.getRawBits());
  return (res);
}
Fixed Fixed::operator-(const Fixed &src) const {
  Fixed res;
  res.setRawBits(num_ - src.getRawBits());
  return (res);
}
Fixed Fixed::operator*(const Fixed &src) const {
  Fixed res;
  res.setRawBits(num_ * src.getRawBits() / (1 << fBits_));
  return (res);
}
Fixed Fixed::operator/(const Fixed &src) const {
  Fixed res;
  res.setRawBits(num_ / src.getRawBits() * (1 << fBits_));
  return (res);
}
Fixed &Fixed::operator++() {
  num_ = num_ + 1;
  return (*this);
}
Fixed Fixed::operator++(int) {
  Fixed tmp = *this;
  this->num_ = this->num_ + 1;
  return (tmp);
}
Fixed &Fixed::operator--() {
  num_ = num_ - 1;
  return (*this);
}
Fixed Fixed::operator--(int) {
  Fixed tmp;
  this->num_ = this->num_ - 1;
  return (tmp);
}

// Getter & Setter
int Fixed::getRawBits(void) const {
  return this->num_;
}
void Fixed::setRawBits(const int raw) {
  this->num_ = raw;
}

// Methods
float Fixed::toFloat(void) const {
  return ((float) num_ / (1 << fBits_));
}
int Fixed::toInt(void) const {
  return (num_ >> fBits_);
}
Fixed &Fixed::max(const Fixed &src1, const Fixed &src2) {
  return const_cast<Fixed &>(src1 > src2 ? src1 : src2);
}
Fixed &Fixed::max(Fixed &src1, Fixed &src2) {
  return (src1 > src2 ? src1 : src2);
}
Fixed &Fixed::min(const Fixed &src1, const Fixed &src2) {
  return const_cast<Fixed &>(src1 < src2 ? src1 : src2);
}
Fixed &Fixed::min(Fixed &src1, Fixed &src2) {
  return (src1 < src2 ? src1 : src2);
}

// Destructor
Fixed::~Fixed() {}

std::ostream &operator<<(std::ostream &os, const Fixed &src) {
  os << src.toFloat();
  return os;
}
