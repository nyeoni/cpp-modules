/*
 * File: Dog.cpp
 * Project: ex00
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Dog.hpp"
#include <iostream>

// Constructor & Destructor
Dog::Dog(void) : Animal() {
  type_ = "Dog";
  std::cout << "Default constructor of Dog called" << std::endl;
}
Dog::Dog(const Dog &copy) : Animal() {
  *this = copy;
  std::cout << "Copy constructor of Dog called" << std::endl;
}
Dog::~Dog() {
  std::cout << "Destructor of Dog called" << std::endl;
}

// Operator Overload
Dog &Dog::operator=(const Dog &src) {
  this->type_ = src.getType();
  std::cout << "Assignment Operator of Dog called" << std::endl;
  return (*this);
}

// Methods
void Dog::makeSound(void) const {
  std::cout << "Bark..! Bark...!" << std::endl;
}
