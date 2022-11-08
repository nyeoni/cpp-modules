/*
 * File: FragTrap.cpp
 * Project: ex02
 * Created Date: 2022/11/08
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap() {
  this->actor_ = "FragTrap";
  this->hp_ = 100;
  this->ep_ = 100;
  this->damage_ = 30;
  std::cout << "[FragTrap] " << "Default constructor called" << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  this->actor_ = "FragTrap";
  this->hp_ = 100;
  this->ep_ = 100;
  this->damage_ = 30;
  std::cout << "[FragTrap] " << "Constructor(string name_) called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &copy) {
  *this = copy;
  std::cout << "[FragTrap] " << "Copy constructor called" << std::endl;
}
FragTrap::~FragTrap() {
  std::cout << "[FragTrap] " << "Destructor called" << std::endl;
}

// Operator Overload
FragTrap &FragTrap::operator=(const FragTrap &src) {
  this->name_ = src.getName();
  this->hp_ = src.getHp();
  this->ep_ = src.getEp();
  this->damage_ = src.getDamage();
  return (*this);
}

// Methods
void FragTrap::highFivesGuys(void) {
  if (checkStatus() == DEAD) {
    std::cout << "HighFive Fail : ";
    printStatus();
    return;
  }
  std::cout << "[" << actor_ << "] " << name_
            << " HIGH FIVE !!!!!" << std::endl;
}
