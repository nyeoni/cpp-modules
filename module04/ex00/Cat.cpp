/*
 * File: Cat.cpp
 * Project: ex00
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Cat.hpp"
#include <iostream>

// Constructor & Destructor
Cat::Cat(void) : Animal() {
  type_ = "Cat";
  std::cout << "Default constructor of Cat called" << std::endl;
}
Cat::Cat(const Cat &copy) : Animal() {
  *this = copy;
  std::cout << "Copy constructor of Cat called" << std::endl;
}
Cat::~Cat() {
  std::cout << "Destructor of Cat called" << std::endl;
}

// Operator Overload
Cat &Cat::operator=(const Cat &src) {
  this->type_ = src.getType();
  std::cout << "Assignment Operator of Cat called" << std::endl;
  return (*this);
}

// Methods
void Cat::makeSound(void) const {
  std::cout << "Meow..! Meow...!" << std::endl;
}
