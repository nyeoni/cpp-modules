/*
 * File: WrongCat.cpp
 * Project: ex00
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "WrongCat.hpp"
#include <iostream>

// Constructor & Destructor
WrongCat::WrongCat(void) : WrongAnimal() {
  type_ = "WrongCat";
  std::cout << "Default constructor of WrongCat called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal() {
  *this = copy;
  std::cout << "Copy constructor of WrongCat called" << std::endl;
}
WrongCat::~WrongCat() {
  std::cout << "Destructor of WrongCat called" << std::endl;
}

// Operator Overload
WrongCat &WrongCat::operator=(const WrongCat &src) {
  this->type_ = src.getType();
  std::cout << "Assignment Operator of WrongCat called" << std::endl;
  return (*this);
}

// Methods
void WrongCat::makeSound(void) const {
  std::cout << "Meow..! Meow...!" << std::endl;
}
