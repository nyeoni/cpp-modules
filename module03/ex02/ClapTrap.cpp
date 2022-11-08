/*
 * File: ClapTrap.cpp
 * Project: ex00
 * Created Date: 2022/11/06
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "ClapTrap.hpp"

#include <iostream>

// Constructor & Destructor
ClapTrap::ClapTrap(void) : actor_("ClapTrap"), name_("noname"), hp_(10), ep_(10), damage_(0) {
  std::cout << "[ClapTrap] " << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) : actor_("ClapTrap"), name_(name), hp_(10), ep_(10), damage_(0) {
  std::cout << "[ClapTrap] " << "Constructor(string name_) called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &copy) {
  *this = copy;
  std::cout << "[ClapTrap] " << "Copy constructor called" << std::endl;
}
ClapTrap::~ClapTrap() {
  std::cout << "[ClapTrap] " << "Destructor called" << std::endl;
}

// Operator Overload
ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
  this->name_ = src.getName();
  this->hp_ = src.getHp();
  this->ep_ = src.getEp();
  this->damage_ = src.getDamage();
  std::cout << "Assignment operator called" << std::endl;
  return (*this);
}

// Getter & Setter
const std::string &ClapTrap::getName() const {
  return name_;
}
void ClapTrap::setName(const std::string &name) {
  name_ = name;
}
unsigned int ClapTrap::getHp() const {
  return hp_;
}
void ClapTrap::setHp(unsigned int hp) {
  hp_ = hp;
}
unsigned int ClapTrap::getEp() const {
  return ep_;
}
void ClapTrap::setEp(unsigned int ep) {
  ep_ = ep;
}
unsigned int ClapTrap::getDamage() const {
  return damage_;
}
void ClapTrap::setDamage(unsigned int damage) {
  damage_ = damage;
}

// Methods
/**
 * attack -> EP -1
 * repair -> EP - 1 / HP + <amount>
 * attacked -> HP - <attack damage>
 * if (hp == 0 || ep == 0) can not do anything
**/
CT_STATUS ClapTrap::checkStatus() {
  if (hp_ == 0)
    return DEAD;
  else if (ep_ == 0)
    return NO_EP;
  else
    return ALIVE;
}
void ClapTrap::printStatus() {
  std::cout << "[" << actor_ << "] " << name_
            << " ( " << "HP : " << hp_ << " / "
            << "EP : " << ep_ << " )"
            << std::endl;
}
void ClapTrap::attack(const std::string &target) {
  if (checkStatus() != ALIVE) {
    std::cout << "Attack Fail : ";
    printStatus();
    return;
  }
  this->ep_ -= 1;
  std::cout << "[" << actor_ << "] " << name_
            << " attacks " << target << ", causing "
            << damage_ << " points of damage!"
            << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
  if (checkStatus() == DEAD) {
    std::cout << "Damaged Fail : ";
    printStatus();
    return;
  }
  if (this->hp_ < amount)
    this->hp_ = 0;
  else
    this->hp_ -= amount;
  std::cout << "[" << actor_ << "] " << name_
            << " take " << amount << " points of damage!"
            << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
  if (checkStatus() != ALIVE) {
    std::cout << "Repaired Fail : ";
    printStatus();
    return;
  }
  this->ep_ -= 1;
  this->hp_ += amount;
  std::cout << "[" << actor_ << "] " << name_
            << " is repaired " << amount << " points of hits!"
            << std::endl;
}


