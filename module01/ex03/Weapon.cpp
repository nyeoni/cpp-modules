/*
 * File: Weapon.cpp
 * Project: cpp_modules
 * Created Date: 2022/08/29
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type_(type) {}
Weapon::~Weapon() {}

const std::string &Weapon::getType() const {
  return type_;
}
void Weapon::setType(const std::string &type) {
  Weapon::type_ = type;
}
