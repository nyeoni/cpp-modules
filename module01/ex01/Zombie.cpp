/*
 * File: Zombie.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/28
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}
Zombie::Zombie(const std::string &name) : name(name) {}
Zombie::~Zombie() {
  std::cout << name << ": Destroy" << std::endl;
}

void Zombie::setName(const std::string &name) {
  Zombie::name = name;
}
void Zombie::announce() {
  std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
