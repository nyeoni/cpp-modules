/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Fixed.hpp"
#include <iostream>

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
  std::cout << b << std::endl;
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max(a, b) << std::endl;
  return 0;
}