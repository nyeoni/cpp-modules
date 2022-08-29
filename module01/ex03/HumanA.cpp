/*
 * File: HumanA.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, const Weapon &weapon) : name_(name), weapon_(weapon) {}
HumanA::~HumanA() {}

void HumanA::attack() {
  std::cout << name_ << " attacks with their" << weapon_.getType() << std::endl;
}
