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

  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;

  virtual ~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &src);

#endif //FIXED_HPP
