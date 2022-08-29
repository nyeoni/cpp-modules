/*
 * File: randomChump.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <string>
#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie zombie(name);
  zombie.announce();
}