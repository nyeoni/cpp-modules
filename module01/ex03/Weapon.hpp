/*
 * File: Weapon.hpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
 private:
  std::string type_;
 public:
  Weapon(const std::string &type);
  ~Weapon();
  const std::string &getType() const;
  void setType(const std::string &type);
};

#endif //WEAPON_HPP
