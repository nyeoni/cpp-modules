/*
 * File: Animal.cpp
 * Project: ex00
 * Created Date: 2022/11/08
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Animal.hpp"
#include <iostream>

// Constructor & Destructor
Animal::Animal(void) : type_("animal") {
  std::cout << "Default constructor of Animal called" << std::endl;
}
Animal::Animal(const Animal &copy) : type_(copy.getType()) {
  std::cout << "Copy constructor of Animal called" << std::endl;
}
Animal::~Animal() {
  std::cout << "Destructor of Animal called" << std::endl;
}

// Operator Overload
Animal &Animal::operator=(const Animal &src) {
  this->type_ = src.getType();
  std::cout << "Assignment Operator of Animal called" << std::endl;
  return (*this);
}

// Methods
void Animal::makeSound(void) const {
  std::cout << "Don't have sound yet..." << std::endl;
}
const std::string &Animal::getType() const {
  return type_;
}
