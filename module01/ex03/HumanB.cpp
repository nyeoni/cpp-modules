/*
 * File: HumanB.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) {
  name_ = name;
  weapon_ = NULL;
}
HumanB::~HumanB() {}

void HumanB::attack() {
  if (!weapon_)
    std::cout << name_ << " doesnt have weapon..." << std::endl;
  std::cout << name_ << " attacks with their" << (*weapon_).getType() << std::endl;
}
void HumanB::setWeapon(Weapon &weapon) {
  weapon_ = &weapon;
}
