/*
 * File: Fixed.hpp
 * Project: cpp_modules
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
 private:
  int num_;
  static const int fBits_ = 8;

 public:
  Fixed(void);
  Fixed(const Fixed &copy);

  Fixed &operator=(Fixed &src);

  int getRawBits(void) const;
  void setRawBits(int const raw);

  virtual ~Fixed();
};

#endif //FIXED_HPP
