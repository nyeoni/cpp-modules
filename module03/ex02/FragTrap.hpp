/*
 * File: FragTrap.hpp
 * Project: ex02
 * Created Date: 2022/11/08
 * Author: nkim
 * Copyright (c) 2022 nkim
 */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap(void);
  FragTrap(const std::string &name);
  FragTrap(const FragTrap &copy);

  FragTrap &operator=(const FragTrap &src);

  void highFivesGuys(void);
  
  ~FragTrap();
};

#endif //FRAGTRAP_HPP
