/*
 * File: zombieHorde.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  Zombie *zombieHorde = new Zombie[N];
  for (int i = 0; i < N; i++)
    zombieHorde[i].setName(name + (char) ('0' + i));
  return (zombieHorde);
}