/*
 * File: newZombie.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/28
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
  Zombie *zombie = new Zombie(name);
  return zombie;
}