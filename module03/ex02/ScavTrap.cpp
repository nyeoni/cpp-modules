/*
 * File: ScavTrap.cpp
 * Project: ex01
 * Created Date: 2022/11/07
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "ScavTrap.hpp"
#include <iostream>

// Constructor & Destructor
ScavTrap::ScavTrap(void) : ClapTrap() {
  this->actor_ = "ScavTrap";
  this->hp_ = 100;
  this->ep_ = 50;
  this->damage_ = 20;
  std::cout << "[ScavTrap] " << "Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  this->actor_ = "ScavTrap";
  this->hp_ = 100;
  this->ep_ = 50;
  this->damage_ = 20;
  std::cout << "[ScavTrap] " << "Constructor(string name_) called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
  *this = copy;
  std::cout << "[ScavTrap] " << "Copy constructor called" << std::endl;
}
ScavTrap::~ScavTrap() {
  std::cout << "[ScavTrap] " << "Destructor called" << std::endl;
}

// Operator Overload
ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
  this->name_ = src.getName();
  this->hp_ = src.getHp();
  this->ep_ = src.getEp();
  this->damage_ = src.getDamage();
  return (*this);
}

// Methods
void ScavTrap::attack(const std::string &target) {
  ClapTrap::attack(target);
}
void ScavTrap::guardGate() {
  if (checkStatus() == DEAD) {
    std::cout << "Guard Fail : ";
    printStatus();
    return;
  }
  std::cout << "[" << actor_ << "] " << name_
            << " is now in Gate keeper mode" << std::endl;
}
