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
#include "FragTrap.hpp"

int main(void) {
  ScavTrap ct1("sacv1");
  ClapTrap ct2("clap2");
  FragTrap ct3("frag3");

  ct1.printStatus();
  ct2.printStatus();

  // 1. attack & take damage example
  ct1.setDamage(5);
  ct1.attack(ct2.getName());
  ct2.takeDamage(ct1.getDamage());
  ct1.printStatus();
  ct2.printStatus();

  std::cout << "----------------------------------------" << std::endl;

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

  std::cout << "----------------------------------------" << std::endl;

  // 4. FragTrap actions
  ct3.attack(ct1.getName());
  ct1.takeDamage(ct3.getDamage());
  ct1.printStatus();
  ct3.printStatus();
  ct1.beRepaired(10);
  ct1.printStatus();

  ct3.highFivesGuys();

  return 0;
}