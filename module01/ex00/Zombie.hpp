/*
 * File: Zombie.hpp
 * Project: cpp_modules
 * Created Date: 2022/08/28
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
 private:
  std::string name;
 public:
  Zombie();
  Zombie(const std::string &name);
  ~Zombie();
  void announce();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif //ZOMBIE_HPP
