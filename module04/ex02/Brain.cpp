/*
 * File: Brain.cpp
 * Project: ex01
 * Created Date: 2022/11/10
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "Brain.hpp"

// Constructor & Destructor
Brain::Brain(void) {
  for (int i = 0; i < IDEA_CNT; i++) {
    this->ideas_[i] = "idea";
  }
  std::cout << "Default constructor of Brain called" << std::endl;
}
Brain::Brain(const Brain &copy) {
  *this = copy;
  std::cout << "Copy constructor of Brain called" << std::endl;
}
Brain::~Brain() {
  std::cout << "Destructor of Brain called" << std::endl;
}

// Operator Overload
Brain &Brain::operator=(const Brain &src) {
  for (int i = 0; i < IDEA_CNT; i++) {
    this->ideas_[i] = src.ideas_[i];
  }
  std::cout << "Assignment Operator of Brain called" << std::endl;
  return (*this);
}

// Getter & Setter
const std::string *Brain::getIdeas() const {
  return ideas_;
}
void Brain::setIdea(int index, std::string idea) {
  this->ideas_[index] = idea;
}
