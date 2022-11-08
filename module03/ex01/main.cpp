/*
 * File: main.cpp
 * Project: ex00
 * Created Date: 2022/10/14
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ScavTrap ct1("ct1");
  ClapTrap ct2("ct2");

  ct1.printStatus();
  ct2.printStatus();

  // 1. attack & take damage example
  ct1.setDamage(5);
  ct1.attack(ct2.getName());
  ct2.takeDamage(ct1.getDamage());
  ct1.printStatus();
  ct2.printStatus();

  // 2. be repaired example
  ct2.beRepaired(1);
  ct2.printStatus();

  std::cout << "----------------------------------------" << std::endl;

  // 3. check trap status
  ct1.setDamage(150);
  ct1.attack(ct2.getName());
  ct2.takeDamage(ct1.getDamage());
  ct1.printStatus();
  ct2.printStatus();

  ct2.beRepaired(1);
  ct2.printStatus();

  ct1.guardGate();
  ct2.attack(ct1.getName());

  return 0;
}