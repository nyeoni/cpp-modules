/*
 * File: main.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Zombie.hpp"

int main(void) {
  Zombie *zombie1 = newZombie("nkim");
  Zombie *zombie2 = newZombie("hannkim");
  zombie1->announce();
  zombie2->announce();
  randomChump("nayeon");
  randomChump("someone");
  delete zombie1;
  delete zombie2;
  return (0);
}