/*
 * File: main.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Zombie.hpp"

int main(void) {
  Zombie *zombies;
  zombies = zombieHorde(5, "zom");

  for (int i = 0; i < 5; i++) {
    zombies[i].announce();
  }
  delete[] zombies;
  return (0);
}