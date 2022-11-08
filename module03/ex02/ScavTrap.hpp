/*
 * File: ScavTrap.hpp
 * Project: ex01
 * Created Date: 2022/11/07
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(void);
  ScavTrap(const std::string &name);
  ScavTrap(const ScavTrap &copy);

  ScavTrap &operator=(const ScavTrap &src);

  void attack(const std::string &target);
  void guardGate();

  ~ScavTrap();
};

#endif //SCAVTRAP_HPP
