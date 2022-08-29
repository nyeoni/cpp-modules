/*
 * File: HumanA.hpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
 private:
  std::string name_;
  Weapon weapon_;
 public:
  HumanA(const std::string &name, const Weapon &weapon);
  ~HumanA();
  void attack(void);
};

#endif //HUMANA_HPP
