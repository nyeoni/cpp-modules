/*
 * File: HumanB.hpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
 private:
  std::string name_;
  Weapon *weapon_;
 public:
  HumanB(const std::string &name);
  ~HumanB();
  void setWeapon(Weapon &weapon);
  void attack(void);
};

#endif //HUMANB_HPP
