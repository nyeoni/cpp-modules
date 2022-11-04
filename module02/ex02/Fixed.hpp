/*
 * File: Fixed.hpp
 * Project: cpp_modules
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
 private:
  int num_;
  static const int fBits_ = 8;

 public:
  Fixed(void);
  Fixed(const int num);
  Fixed(const float num);
  Fixed(const Fixed &copy);

  Fixed &operator=(const Fixed &src);

  // Comparison Operator
  bool operator>(const Fixed &src) const;
  bool operator<(const Fixed &src) const;
  bool operator>=(const Fixed &src) const;
  bool operator<=(const Fixed &src) const;
  bool operator==(const Fixed &src) const;
  bool operator!=(const Fixed &src) const;

  // Arithmetic Operator
  Fixed operator+(const Fixed &src) const;
  Fixed operator-(const Fixed &src) const;
  Fixed operator*(const Fixed &src) const;
  Fixed operator/(const Fixed &src) const;

  // Increment & Decrement Operator
  Fixed &operator++();
  Fixed operator++(int);
  Fixed &operator--();
  Fixed operator--(int);

  // Getter & Setter
  int getRawBits(void) const;
  void setRawBits(int const raw);

  // Member functions
  float toFloat(void) const;
  int toInt(void) const;

  static Fixed &max(const Fixed &src1, const Fixed &src2);
  static Fixed &max(Fixed &src1, Fixed &src2);
  static Fixed &min(const Fixed &src1, const Fixed &src2);
  static Fixed &min(Fixed &src1, Fixed &src2);

  virtual ~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &src);

#endif //FIXED_HPP
