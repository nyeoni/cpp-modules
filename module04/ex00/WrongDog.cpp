/*
 * File: WrongDog.cpp
 * Project: ex00
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "WrongDog.hpp"
#include <iostream>

// Constructor & Destructor
WrongDog::WrongDog(void) : WrongAnimal() {
  type_ = "WrongDog";
  std::cout << "Default constructor of WrongDog called" << std::endl;
}
WrongDog::WrongDog(const WrongDog &copy) : WrongAnimal() {
  *this = copy;
  std::cout << "Copy constructor of WrongDog called" << std::endl;
}
WrongDog::~WrongDog() {
  std::cout << "Destructor of WrongDog called" << std::endl;
}

// Operator Overload
WrongDog &WrongDog::operator=(const WrongDog &src) {
  this->type_ = src.getType();
  std::cout << "Assignment Operator of WrongDog called" << std::endl;
  return (*this);
}

// Methods
void WrongDog::makeSound(void) const {
  std::cout << "Meow..! Meow...!" << std::endl;
}
